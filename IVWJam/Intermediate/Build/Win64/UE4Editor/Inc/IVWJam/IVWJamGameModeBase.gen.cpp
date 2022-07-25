// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVWJam/IVWJamGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVWJamGameModeBase() {}
// Cross Module References
	IVWJAM_API UClass* Z_Construct_UClass_AIVWJamGameModeBase_NoRegister();
	IVWJAM_API UClass* Z_Construct_UClass_AIVWJamGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_IVWJam();
// End Cross Module References
	void AIVWJamGameModeBase::StaticRegisterNativesAIVWJamGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AIVWJamGameModeBase_NoRegister()
	{
		return AIVWJamGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AIVWJamGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIVWJamGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IVWJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIVWJamGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IVWJamGameModeBase.h" },
		{ "ModuleRelativePath", "IVWJamGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIVWJamGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIVWJamGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AIVWJamGameModeBase_Statics::ClassParams = {
		&AIVWJamGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AIVWJamGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIVWJamGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIVWJamGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AIVWJamGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AIVWJamGameModeBase, 3138056830);
	template<> IVWJAM_API UClass* StaticClass<AIVWJamGameModeBase>()
	{
		return AIVWJamGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AIVWJamGameModeBase(Z_Construct_UClass_AIVWJamGameModeBase, &AIVWJamGameModeBase::StaticClass, TEXT("/Script/IVWJam"), TEXT("AIVWJamGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIVWJamGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
