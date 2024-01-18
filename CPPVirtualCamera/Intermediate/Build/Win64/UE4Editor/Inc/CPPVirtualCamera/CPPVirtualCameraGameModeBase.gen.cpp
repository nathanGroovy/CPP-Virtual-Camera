// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPVirtualCamera/CPPVirtualCameraGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPVirtualCameraGameModeBase() {}
// Cross Module References
	CPPVIRTUALCAMERA_API UClass* Z_Construct_UClass_ACPPVirtualCameraGameModeBase_NoRegister();
	CPPVIRTUALCAMERA_API UClass* Z_Construct_UClass_ACPPVirtualCameraGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPPVirtualCamera();
// End Cross Module References
	void ACPPVirtualCameraGameModeBase::StaticRegisterNativesACPPVirtualCameraGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACPPVirtualCameraGameModeBase_NoRegister()
	{
		return ACPPVirtualCameraGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPPVirtualCameraGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPPVirtualCameraGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPVirtualCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPVirtualCameraGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPPVirtualCameraGameModeBase.h" },
		{ "ModuleRelativePath", "CPPVirtualCameraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPPVirtualCameraGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPVirtualCameraGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPPVirtualCameraGameModeBase_Statics::ClassParams = {
		&ACPPVirtualCameraGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPPVirtualCameraGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPVirtualCameraGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPPVirtualCameraGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPPVirtualCameraGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPPVirtualCameraGameModeBase, 2947230034);
	template<> CPPVIRTUALCAMERA_API UClass* StaticClass<ACPPVirtualCameraGameModeBase>()
	{
		return ACPPVirtualCameraGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPPVirtualCameraGameModeBase(Z_Construct_UClass_ACPPVirtualCameraGameModeBase, &ACPPVirtualCameraGameModeBase::StaticClass, TEXT("/Script/CPPVirtualCamera"), TEXT("ACPPVirtualCameraGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPVirtualCameraGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
