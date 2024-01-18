// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPVIRTUALCAMERA_ChannelWidget_generated_h
#error "ChannelWidget.generated.h already included, missing '#pragma once' in ChannelWidget.h"
#endif
#define CPPVIRTUALCAMERA_ChannelWidget_generated_h

#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_SPARSE_DATA
#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnJoinButtonClick); \
	DECLARE_FUNCTION(execOnLeaveButtonClick);


#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnJoinButtonClick); \
	DECLARE_FUNCTION(execOnLeaveButtonClick);


#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChannelWidget(); \
	friend struct Z_Construct_UClass_UChannelWidget_Statics; \
public: \
	DECLARE_CLASS(UChannelWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPPVirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UChannelWidget)


#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUChannelWidget(); \
	friend struct Z_Construct_UClass_UChannelWidget_Statics; \
public: \
	DECLARE_CLASS(UChannelWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPPVirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(UChannelWidget)


#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannelWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannelWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannelWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannelWidget(UChannelWidget&&); \
	NO_API UChannelWidget(const UChannelWidget&); \
public:


#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannelWidget(UChannelWidget&&); \
	NO_API UChannelWidget(const UChannelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannelWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannelWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannelWidget)


#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__remoteView() { return STRUCT_OFFSET(UChannelWidget, remoteView); } \
	FORCEINLINE static uint32 __PPO__localView() { return STRUCT_OFFSET(UChannelWidget, localView); } \
	FORCEINLINE static uint32 __PPO__JoinBtn() { return STRUCT_OFFSET(UChannelWidget, JoinBtn); } \
	FORCEINLINE static uint32 __PPO__LeaveBtn() { return STRUCT_OFFSET(UChannelWidget, LeaveBtn); }


#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_30_PROLOG
#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_PRIVATE_PROPERTY_OFFSET \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_SPARSE_DATA \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_RPC_WRAPPERS \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_INCLASS \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_PRIVATE_PROPERTY_OFFSET \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_SPARSE_DATA \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_INCLASS_NO_PURE_DECLS \
	CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPVIRTUALCAMERA_API UClass* StaticClass<class UChannelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPPVirtualCamera_Source_CPPVirtualCamera_ChannelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
