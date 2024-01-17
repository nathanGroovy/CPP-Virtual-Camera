// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include <string>
#include <chrono>
#include "AgoraPluginInterface.h"




#if PLATFORM_ANDROID
#include "AndroidPermission/Classes/AndroidPermissionFunctionLibrary.h"
#endif


#include "ChannelWidget.generated.h"

using namespace agora::rtc;
using namespace agora;
using namespace std;

/**
 * 
 */
UCLASS()
class CPPVIRTUALCAMERA_API UChannelWidget : public UUserWidget, public IRtcEngineEventHandler
{
	GENERATED_BODY()

	void CheckAndroidPermission();

	void setupVideoSDKEngine();

	void NativeConstruct();

	void NativeDestruct();

	void startPushVideo();


	IRtcEngine* agoraEngine;
	string appId = "1b7169aa24254eedac880575b52c96f3";
	string channelName = "myChannel";
	string token = "";
	bool isJoin = false;
	int remoteUId;

	agora::media::IMediaEngine* MediaEngine;
	FString VIDEO_FILE = "MPK.mp4";


protected:
	
	// Occurs when a remote user joins the channel.
	void onUserJoined(uid_t uid, int elapsed) override;
	// Occurs when a local user joins the channel.
	void onJoinChannelSuccess(const char* channel, uid_t uid, int elapsed) override;
	// Occurs when you leave the channel.
	void onLeaveChannel(const RtcStats& stats) override;
	// Occurs when the remote user drops offline.
	void onUserOffline(uid_t uid, USER_OFFLINE_REASON_TYPE reason) override;


	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* remoteView = nullptr;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UImage* localView = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* JoinBtn = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* LeaveBtn = nullptr;

	UFUNCTION(BlueprintCallable)
	void OnLeaveButtonClick();
	UFUNCTION(BlueprintCallable)
	void OnJoinButtonClick();
	
};
