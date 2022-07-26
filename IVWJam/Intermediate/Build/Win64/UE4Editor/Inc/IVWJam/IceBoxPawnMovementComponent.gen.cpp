// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVWJam/IceBoxPawnMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIceBoxPawnMovementComponent() {}
// Cross Module References
	IVWJAM_API UClass* Z_Construct_UClass_UIceBoxPawnMovementComponent_NoRegister();
	IVWJAM_API UClass* Z_Construct_UClass_UIceBoxPawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_IVWJam();
// End Cross Module References
	void UIceBoxPawnMovementComponent::StaticRegisterNativesUIceBoxPawnMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UIceBoxPawnMovementComponent_NoRegister()
	{
		return UIceBoxPawnMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IVWJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* \n\x09*/" },
		{ "IncludePath", "IceBoxPawnMovementComponent.h" },
		{ "ModuleRelativePath", "IceBoxPawnMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIceBoxPawnMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::ClassParams = {
		&UIceBoxPawnMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIceBoxPawnMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIceBoxPawnMovementComponent, 3199934495);
	template<> IVWJAM_API UClass* StaticClass<UIceBoxPawnMovementComponent>()
	{
		return UIceBoxPawnMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIceBoxPawnMovementComponent(Z_Construct_UClass_UIceBoxPawnMovementComponent, &UIceBoxPawnMovementComponent::StaticClass, TEXT("/Script/IVWJam"), TEXT("UIceBoxPawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIceBoxPawnMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
