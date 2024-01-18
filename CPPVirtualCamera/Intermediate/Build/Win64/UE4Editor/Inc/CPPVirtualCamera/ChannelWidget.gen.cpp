// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPVirtualCamera/ChannelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChannelWidget() {}
// Cross Module References
	CPPVIRTUALCAMERA_API UClass* Z_Construct_UClass_UChannelWidget_NoRegister();
	CPPVIRTUALCAMERA_API UClass* Z_Construct_UClass_UChannelWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CPPVirtualCamera();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UChannelWidget::execOnJoinButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChannelWidget::execOnLeaveButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeaveButtonClick();
		P_NATIVE_END;
	}
	void UChannelWidget::StaticRegisterNativesUChannelWidget()
	{
		UClass* Class = UChannelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnJoinButtonClick", &UChannelWidget::execOnJoinButtonClick },
			{ "OnLeaveButtonClick", &UChannelWidget::execOnLeaveButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChannelWidget_OnJoinButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChannelWidget_OnJoinButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChannelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChannelWidget_OnJoinButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChannelWidget, nullptr, "OnJoinButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChannelWidget_OnJoinButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChannelWidget_OnJoinButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChannelWidget_OnJoinButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChannelWidget_OnJoinButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChannelWidget_OnLeaveButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChannelWidget_OnLeaveButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ChannelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UChannelWidget_OnLeaveButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChannelWidget, nullptr, "OnLeaveButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChannelWidget_OnLeaveButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChannelWidget_OnLeaveButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChannelWidget_OnLeaveButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UChannelWidget_OnLeaveButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChannelWidget_NoRegister()
	{
		return UChannelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UChannelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_remoteView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_remoteView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_localView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_localView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JoinBtn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveBtn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaveBtn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChannelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPVirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChannelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChannelWidget_OnJoinButtonClick, "OnJoinButtonClick" }, // 4145131116
		{ &Z_Construct_UFunction_UChannelWidget_OnLeaveButtonClick, "OnLeaveButtonClick" }, // 1212668896
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannelWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ChannelWidget.h" },
		{ "ModuleRelativePath", "ChannelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannelWidget_Statics::NewProp_remoteView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ChannelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChannelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChannelWidget_Statics::NewProp_remoteView = { "remoteView", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChannelWidget, remoteView), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChannelWidget_Statics::NewProp_remoteView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChannelWidget_Statics::NewProp_remoteView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannelWidget_Statics::NewProp_localView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ChannelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChannelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChannelWidget_Statics::NewProp_localView = { "localView", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChannelWidget, localView), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChannelWidget_Statics::NewProp_localView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChannelWidget_Statics::NewProp_localView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannelWidget_Statics::NewProp_JoinBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ChannelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChannelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChannelWidget_Statics::NewProp_JoinBtn = { "JoinBtn", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChannelWidget, JoinBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChannelWidget_Statics::NewProp_JoinBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChannelWidget_Statics::NewProp_JoinBtn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannelWidget_Statics::NewProp_LeaveBtn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ChannelWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ChannelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChannelWidget_Statics::NewProp_LeaveBtn = { "LeaveBtn", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChannelWidget, LeaveBtn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChannelWidget_Statics::NewProp_LeaveBtn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChannelWidget_Statics::NewProp_LeaveBtn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChannelWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChannelWidget_Statics::NewProp_remoteView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChannelWidget_Statics::NewProp_localView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChannelWidget_Statics::NewProp_JoinBtn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChannelWidget_Statics::NewProp_LeaveBtn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChannelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChannelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChannelWidget_Statics::ClassParams = {
		&UChannelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChannelWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChannelWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChannelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChannelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChannelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChannelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChannelWidget, 1986192246);
	template<> CPPVIRTUALCAMERA_API UClass* StaticClass<UChannelWidget>()
	{
		return UChannelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChannelWidget(Z_Construct_UClass_UChannelWidget, &UChannelWidget::StaticClass, TEXT("/Script/CPPVirtualCamera"), TEXT("UChannelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChannelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
