// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define BUILDINGESCAPE_Grabber_generated_h

#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_RPC_WRAPPERS
#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PhysicsHandle() { return STRUCT_OFFSET(UGrabber, PhysicsHandle); } \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(UGrabber, InputComponent); }


#define BuildingEscape2_Source_BuildingEscape_Grabber_h_11_PROLOG
#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape2_Source_BuildingEscape_Grabber_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape2_Source_BuildingEscape_Grabber_h_14_RPC_WRAPPERS \
	BuildingEscape2_Source_BuildingEscape_Grabber_h_14_INCLASS \
	BuildingEscape2_Source_BuildingEscape_Grabber_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape2_Source_BuildingEscape_Grabber_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape2_Source_BuildingEscape_Grabber_h_14_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape2_Source_BuildingEscape_Grabber_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape2_Source_BuildingEscape_Grabber_h_14_INCLASS_NO_PURE_DECLS \
	BuildingEscape2_Source_BuildingEscape_Grabber_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape2_Source_BuildingEscape_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
