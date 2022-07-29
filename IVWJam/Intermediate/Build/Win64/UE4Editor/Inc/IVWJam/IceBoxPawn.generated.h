// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef IVWJAM_IceBoxPawn_generated_h
#error "IceBoxPawn.generated.h already included, missing '#pragma once' in IceBoxPawn.h"
#endif
#define IVWJAM_IceBoxPawn_generated_h

#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_SPARSE_DATA
#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIceVelocity); \
	DECLARE_FUNCTION(execGetIceVelocity); \
	DECLARE_FUNCTION(execCustomScale); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIceVelocity); \
	DECLARE_FUNCTION(execGetIceVelocity); \
	DECLARE_FUNCTION(execCustomScale); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIceBoxPawn(); \
	friend struct Z_Construct_UClass_AIceBoxPawn_Statics; \
public: \
	DECLARE_CLASS(AIceBoxPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IVWJam"), NO_API) \
	DECLARE_SERIALIZER(AIceBoxPawn)


#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAIceBoxPawn(); \
	friend struct Z_Construct_UClass_AIceBoxPawn_Statics; \
public: \
	DECLARE_CLASS(AIceBoxPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IVWJam"), NO_API) \
	DECLARE_SERIALIZER(AIceBoxPawn)


#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIceBoxPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIceBoxPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIceBoxPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIceBoxPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIceBoxPawn(AIceBoxPawn&&); \
	NO_API AIceBoxPawn(const AIceBoxPawn&); \
public:


#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIceBoxPawn(AIceBoxPawn&&); \
	NO_API AIceBoxPawn(const AIceBoxPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIceBoxPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIceBoxPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIceBoxPawn)


#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_PRIVATE_PROPERTY_OFFSET
#define IVWJam_Source_IVWJam_IceBoxPawn_h_15_PROLOG
#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_SPARSE_DATA \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_RPC_WRAPPERS \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_INCLASS \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVWJam_Source_IVWJam_IceBoxPawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_PRIVATE_PROPERTY_OFFSET \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_SPARSE_DATA \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_INCLASS_NO_PURE_DECLS \
	IVWJam_Source_IVWJam_IceBoxPawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IVWJAM_API UClass* StaticClass<class AIceBoxPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVWJam_Source_IVWJam_IceBoxPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
