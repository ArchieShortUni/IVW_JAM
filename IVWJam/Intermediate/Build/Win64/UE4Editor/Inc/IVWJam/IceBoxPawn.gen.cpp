// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVWJam/IceBoxPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceBoxPawn() {}
// Cross Module References
	IVWJAM_API UClass* Z_Construct_UClass_AIceBoxPawn_NoRegister();
	IVWJAM_API UClass* Z_Construct_UClass_AIceBoxPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_IVWJam();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	IVWJAM_API UClass* Z_Construct_UClass_UIceBoxPawnMovementComponent_NoRegister();
// End Cross Module References
	void AIceBoxPawn::StaticRegisterNativesAIceBoxPawn()
	{
	}
	UClass* Z_Construct_UClass_AIceBoxPawn_NoRegister()
	{
		return AIceBoxPawn::StaticClass();
	}
	struct Z_Construct_UClass_AIceBoxPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceMovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IceMovementComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIceBoxPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_IVWJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IceBoxPawn.h" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_HitBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_HitBox = { "HitBox", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, HitBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_HitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_HitBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMovementComponent = { "IceMovementComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, IceMovementComponent), Z_Construct_UClass_UIceBoxPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMovementComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIceBoxPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_HitBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIceBoxPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIceBoxPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIceBoxPawn_Statics::ClassParams = {
		&AIceBoxPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIceBoxPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIceBoxPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIceBoxPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIceBoxPawn, 910056707);
	template<> IVWJAM_API UClass* StaticClass<AIceBoxPawn>()
	{
		return AIceBoxPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIceBoxPawn(Z_Construct_UClass_AIceBoxPawn, &AIceBoxPawn::StaticClass, TEXT("/Script/IVWJam"), TEXT("AIceBoxPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIceBoxPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
