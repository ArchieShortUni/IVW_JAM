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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "IceBoxPawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIceBoxPawnMovementComponent, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIceBoxPawnMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::ClassParams = {
		&UIceBoxPawnMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIceBoxPawnMovementComponent_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UIceBoxPawnMovementComponent, 2668713792);
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
