// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICKSTART_QuickStartGameMode_generated_h
#error "QuickStartGameMode.generated.h already included, missing '#pragma once' in QuickStartGameMode.h"
#endif
#define QUICKSTART_QuickStartGameMode_generated_h

#define QuickStart_Source_QuickStart_QuickStartGameMode_h_14_RPC_WRAPPERS
#define QuickStart_Source_QuickStart_QuickStartGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define QuickStart_Source_QuickStart_QuickStartGameMode_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAQuickStartGameMode(); \
	friend QUICKSTART_API class UClass* Z_Construct_UClass_AQuickStartGameMode(); \
	public: \
	DECLARE_CLASS(AQuickStartGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, QuickStart, NO_API) \
	DECLARE_SERIALIZER(AQuickStartGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AQuickStartGameMode*>(this); }


#define QuickStart_Source_QuickStart_QuickStartGameMode_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAQuickStartGameMode(); \
	friend QUICKSTART_API class UClass* Z_Construct_UClass_AQuickStartGameMode(); \
	public: \
	DECLARE_CLASS(AQuickStartGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, QuickStart, NO_API) \
	DECLARE_SERIALIZER(AQuickStartGameMode) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AQuickStartGameMode*>(this); }


#define QuickStart_Source_QuickStart_QuickStartGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuickStartGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuickStartGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuickStartGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuickStartGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AQuickStartGameMode(const AQuickStartGameMode& InCopy); \
public:


#define QuickStart_Source_QuickStart_QuickStartGameMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuickStartGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AQuickStartGameMode(const AQuickStartGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuickStartGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuickStartGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuickStartGameMode)


#define QuickStart_Source_QuickStart_QuickStartGameMode_h_11_PROLOG
#define QuickStart_Source_QuickStart_QuickStartGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_QuickStartGameMode_h_14_RPC_WRAPPERS \
	QuickStart_Source_QuickStart_QuickStartGameMode_h_14_INCLASS \
	QuickStart_Source_QuickStart_QuickStartGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_POP


#define QuickStart_Source_QuickStart_QuickStartGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_QuickStartGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_QuickStartGameMode_h_14_INCLASS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_QuickStartGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_POP


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuickStart_Source_QuickStart_QuickStartGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
