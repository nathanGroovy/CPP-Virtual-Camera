// Fill out your copyright notice in the Description page of Project Settings.


#include "ChannelWidget.h"
#include "RHICommandList.h"
#include "Math/IntRect.h"
#include "RHI.h"
#include "RHIResources.h"
#include "Rendering/SlateRenderer.h"
#include "Widgets/SWindow.h"
#include "RHIDefinitions.h"

void UChannelWidget::CheckAndroidPermission()
{
#if PLATFORM_ANDROID
    FString pathfromName = UGameplayStatics::GetPlatformName();
    if (pathfromName == "Android")
    {
        TArray<FString> AndroidPermission;
        AndroidPermission.Add(FString("android.permission.CAMERA"));
        AndroidPermission.Add(FString("android.permission.RECORD_AUDIO"));
        AndroidPermission.Add(FString("android.permission.READ_PHONE_STATE"));
        AndroidPermission.Add(FString("android.permission.WRITE_EXTERNAL_STORAGE"));
        UAndroidPermissionFunctionLibrary::AcquirePermissions(AndroidPermission);
    }
#endif
}

void UChannelWidget::startPushVideo()
{
    FString LoadDir = FPaths::ProjectContentDir() / TEXT("Video/");
    LoadDir += VIDEO_FILE;
    TArray<uint8> result;
    FFileHelper::LoadFileToArray(result, *LoadDir, 0);
    if (result.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("File is empty"));
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("File found"));
    }
    agora::rtc::video_track_id_t trackID = agoraEngine->createCustomVideoTrack();
    UE_LOG(LogTemp, Warning, TEXT("create custom video track: %i"), trackID);
    SenderOptions sendoptions;
    MediaEngine->setExternalVideoSource(true, false, agora::media::EXTERNAL_VIDEO_SOURCE_TYPE::ENCODED_VIDEO_FRAME, sendoptions);
    agora::media::base::ExternalVideoFrame externalVideoFrame;
    externalVideoFrame.buffer = FMemory::Malloc(result.Num() * sizeof(uint8));
    FMemory::Memcpy(externalVideoFrame.buffer, result.GetData(), result.Num() * sizeof(uint8));
    externalVideoFrame.type = agora::media::base::ExternalVideoFrame::VIDEO_BUFFER_RAW_DATA;
    externalVideoFrame.format = agora::media::base::VIDEO_PIXEL_RGBA;
    externalVideoFrame.stride = 1920;
    externalVideoFrame.height = 1040;
    externalVideoFrame.timestamp = 0;
    ChannelMediaOptions options;
    options.clientRoleType = CLIENT_ROLE_BROADCASTER;
    options.autoSubscribeAudio = true;
    options.autoSubscribeVideo = true;
    options.publishCameraTrack = false; // Disable publishing video track.
    options.publishCustomVideoTrack = true; // Enable publishing custom video track.
    options.publishMicrophoneTrack = false;
    int update = agoraEngine->updateChannelMediaOptions(options);
    UE_LOG(LogTemp, Warning, TEXT("update channel media options: %i"), update);
    int error = MediaEngine->pushVideoFrame(&externalVideoFrame, trackID);
    UE_LOG(LogTemp, Warning, TEXT("push video frame: %i"), error);
}


void UChannelWidget::setupVideoSDKEngine()
{
    // Create an engine instance.
    agoraEngine = ue::createAgoraRtcEngine();
    // Specify a context for the engine.
    RtcEngineContext context;
    context.appId = appId.c_str();
    context.eventHandler = this;
    // Choose the communication profile for video calling.
    context.channelProfile = CHANNEL_PROFILE_TYPE::CHANNEL_PROFILE_LIVE_BROADCASTING;
    // Initialize the engine instance with the context.
    agoraEngine->initialize(context);
    // Enable the local audio capture to init the local video stream.
    agoraEngine->enableAudio();
    // Enable the local video capture to init the local video stream.
    agoraEngine->enableVideo();
    ChannelMediaOptions options;
    options.clientRoleType = CLIENT_ROLE_BROADCASTER;
    options.autoSubscribeAudio = true;
    options.autoSubscribeVideo = true;
    options.publishCameraTrack = false; // Disable publishing video track.
    options.publishCustomVideoTrack = true; // Enable publishing custom video track.
    options.publishMicrophoneTrack = false;
    int update = agoraEngine->updateChannelMediaOptions(options);
    // Attach event listener functions to the button.
    LeaveBtn->OnClicked.AddDynamic(this, &UChannelWidget::OnLeaveButtonClick);
    JoinBtn->OnClicked.AddDynamic(this, &UChannelWidget::OnJoinButtonClick);
    agoraEngine->queryInterface(AGORA_IID_MEDIA_ENGINE, (void**)&MediaEngine);

    
}

void UChannelWidget::OnLeaveButtonClick()
{
    UE_LOG(LogTemp, Warning, TEXT("UMyUserWidget:: OnLeaveButtonClick ======"));
    agoraEngine->leaveChannel();
    remoteUId = NULL;
    isJoin = false;
}

void UChannelWidget::OnJoinButtonClick()
{
    // Setup a video canvas to render the local video.
    VideoCanvas videoCanvas;
    videoCanvas.view = localView;
    videoCanvas.uid = 0;
    videoCanvas.sourceType = VIDEO_SOURCE_TYPE::VIDEO_SOURCE_CUSTOM;
    agoraEngine->setupLocalVideo(videoCanvas);
    // Set the user role to Host.
    agoraEngine->setClientRole(CLIENT_ROLE_TYPE::CLIENT_ROLE_BROADCASTER);
    // Join the channel.
    agoraEngine->joinChannel(token.c_str(), channelName.c_str(), "", 0);
    isJoin = true;
    UE_LOG(LogTemp, Warning, TEXT("User Joined Channel"));

    if (FSlateApplication::IsInitialized())
    {
        eventId = FSlateApplication::Get().GetRenderer()->OnBackBufferReadyToPresent().AddUObject(this, &UChannelWidget::OnBackBufferReady_RenderThread);
    }

}

void UChannelWidget::onLeaveChannel(const RtcStats& stats)
{
    AsyncTask(ENamedThreads::GameThread, [=]()
        {
            UE_LOG(LogTemp, Warning, TEXT("UMyUserWidget::onLeaveChannel"));
            // Clean up the local view when the local user leaves the channel.
            VideoCanvas videoCanvas;
            videoCanvas.view = nullptr;
            videoCanvas.uid = 0;
            videoCanvas.sourceType = VIDEO_SOURCE_TYPE::VIDEO_SOURCE_CUSTOM;
            if (agoraEngine != nullptr)
            {
                agoraEngine->setupLocalVideo(videoCanvas);
            }
            isJoin = false;
        });
}

void UChannelWidget::onJoinChannelSuccess(const char* channel, uid_t uid, int elapsed)
{
    AsyncTask(ENamedThreads::GameThread, [=]()
        {
            UE_LOG(LogTemp, Warning, TEXT("JoinChannelSuccess uid: %u"), uid);
        });
}

// This callback is triggered when a remote user leaves the channel or drops offline.
void UChannelWidget::onUserOffline(uid_t uid, USER_OFFLINE_REASON_TYPE reason)
{
    AsyncTask(ENamedThreads::GameThread, [=]()
        {
            UE_LOG(LogTemp, Warning, TEXT("UMyUserWidget::onUserOffline  uid: %u"), uid);
            // Clean up the remote video view.
            VideoCanvas videoCanvas;
            videoCanvas.view = nullptr;
            videoCanvas.uid = uid;
            videoCanvas.sourceType = VIDEO_SOURCE_TYPE::VIDEO_SOURCE_REMOTE;
            RtcConnection connection;
            connection.channelId = channelName.c_str();
            if (agoraEngine != nullptr)
            {
                ((IRtcEngineEx*)agoraEngine)->setupRemoteVideoEx(videoCanvas, connection);
            }
        });
}

void UChannelWidget::onUserJoined(uid_t uid, int elapsed)
{
    AsyncTask(ENamedThreads::GameThread, [=]()
        {
            UE_LOG(LogTemp, Warning, TEXT("UMyUserWidget::onUserJoined  uid: %u"), uid);
            // Setup a canvas to render the remote video.
            VideoCanvas videoCanvas;
            videoCanvas.view = remoteView;
            videoCanvas.uid = uid;
            remoteUId = uid;
            videoCanvas.sourceType = VIDEO_SOURCE_TYPE::VIDEO_SOURCE_REMOTE;
            RtcConnection connection;
            connection.channelId = channelName.c_str();
            // Render the remote video.
            ((IRtcEngineEx*)agoraEngine)->setupRemoteVideoEx(videoCanvas, connection);
        });
}

void UChannelWidget::NativeDestruct()
{
    Super::NativeDestruct();
    FSlateApplication::Get().GetRenderer()->OnBackBufferReadyToPresent().Remove(eventId);

}


void UChannelWidget::NativeConstruct()
{
    CheckAndroidPermission();
    setupVideoSDKEngine();
}

std::time_t UChannelWidget::getTimeStamp()
{
    std::chrono::time_point<std::chrono::system_clock, std::chrono::milliseconds> tp = std::chrono::time_point_cast<std::chrono::milliseconds>(std::chrono::system_clock::now());
    std::time_t timestamp = tp.time_since_epoch().count();
    return timestamp;
}

void UChannelWidget::OnBackBufferReady_RenderThread(SWindow& window, const FTexture2DRHIRef& BackBuffer)
{

    ChannelMediaOptions options;
    options.clientRoleType = CLIENT_ROLE_BROADCASTER;
    options.autoSubscribeAudio = true;
    options.autoSubscribeVideo = true;
    options.publishCameraTrack = false; // Disable publishing video track.
    options.publishCustomVideoTrack = true; // Enable publishing custom video track.
    options.publishMicrophoneTrack = false;
    int update = agoraEngine->updateChannelMediaOptions(options);

    FRHICommandListImmediate& RHICmdList = FRHICommandListExecutor::GetImmediateCommandList();
    auto width = BackBuffer->GetSizeX();
    auto height = BackBuffer->GetSizeY();
    FIntRect Rect(0, 0, BackBuffer->GetSizeX(), BackBuffer->GetSizeY());
    TArray<FColor> Data;

    RHICmdList.ReadSurfaceData(BackBuffer, Rect, Data, FReadSurfaceDataFlags());
    if (UserExternalVideoFrame == nullptr)
    {
        UserExternalVideoFrame = new agora::media::base::ExternalVideoFrame();
    }
    UserExternalVideoFrame->type = agora::media::base::ExternalVideoFrame::VIDEO_BUFFER_TYPE::VIDEO_BUFFER_RAW_DATA;
    UserExternalVideoFrame->format = agora::media::base::VIDEO_PIXEL_FORMAT::VIDEO_PIXEL_BGRA;
    UserExternalVideoFrame->stride = BackBuffer->GetSizeX();
    UserExternalVideoFrame->height = BackBuffer->GetSizeY();
    UserExternalVideoFrame->cropLeft = 10;
    UserExternalVideoFrame->cropTop = 10;
    UserExternalVideoFrame->cropRight = 10;
    UserExternalVideoFrame->cropBottom = 10;
    UserExternalVideoFrame->rotation = 0;
    UserExternalVideoFrame->timestamp = getTimeStamp();
    if (UserExternalVideoFrame->buffer == nullptr)
    {
        UserExternalVideoFrame->buffer = (uint8*)FMemory::Malloc(BackBuffer->GetSizeX() * BackBuffer->GetSizeY() * 4);
    }
    if (Data.Num() > 4)
    {
        FMemory::Memcpy(UserExternalVideoFrame->buffer, Data.GetData(), BackBuffer->GetSizeX() * BackBuffer->GetSizeY() * 4);
        if (MediaEngine != nullptr)
        {
            int error = MediaEngine->pushVideoFrame(UserExternalVideoFrame);
            UE_LOG(LogTemp, Warning, TEXT("push video frame: %i"), error);
        }
    }
}