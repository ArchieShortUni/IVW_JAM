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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	IVWJAM_API UClass* Z_Construct_UClass_UIceBoxPawnMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AIceBoxPawn::execCustomScale)
	{
		P_GET_STRUCT(FVector,Z_Param_newScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CustomScale(Z_Param_newScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AIceBoxPawn::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AIceBoxPawn::StaticRegisterNativesAIceBoxPawn()
	{
		UClass* Class = AIceBoxPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomScale", &AIceBoxPawn::execCustomScale },
			{ "OnOverlapBegin", &AIceBoxPawn::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics
	{
		struct IceBoxPawn_eventCustomScale_Parms
		{
			FVector newScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::NewProp_newScale = { "newScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IceBoxPawn_eventCustomScale_Parms, newScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::NewProp_newScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIceBoxPawn, nullptr, "CustomScale", nullptr, nullptr, sizeof(IceBoxPawn_eventCustomScale_Parms), Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIceBoxPawn_CustomScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIceBoxPawn_CustomScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics
	{
		struct IceBoxPawn_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IceBoxPawn_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IceBoxPawn_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IceBoxPawn_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IceBoxPawn_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((IceBoxPawn_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IceBoxPawn_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IceBoxPawn_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIceBoxPawn, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(IceBoxPawn_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AIceBoxPawn_NoRegister()
	{
		return AIceBoxPawn::StaticClass();
	}
	struct Z_Construct_UClass_AIceBoxPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPosBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XPosBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XNegBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XNegBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YPosBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YPosBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YNegBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YNegBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZPosBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZPosBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZNegBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZNegBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceLevelZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IceLevelZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceLevelX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IceLevelX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceLevelY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IceLevelY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHazard_MetaData[];
#endif
		static void NewProp_InHazard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InHazard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IceMeltMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IceMeltMultiplier;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AIceBoxPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AIceBoxPawn_CustomScale, "CustomScale" }, // 3411618193
		{ &Z_Construct_UFunction_AIceBoxPawn_OnOverlapBegin, "OnOverlapBegin" }, // 1754435220
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XPosBox_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Face Hit boxes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
		{ "ToolTip", "Face Hit boxes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XPosBox = { "XPosBox", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, XPosBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XPosBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XPosBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XNegBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XNegBox = { "XNegBox", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, XNegBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XNegBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XNegBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YPosBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YPosBox = { "YPosBox", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, YPosBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YPosBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YPosBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YNegBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YNegBox = { "YNegBox", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, YNegBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YNegBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YNegBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZPosBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZPosBox = { "ZPosBox", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, ZPosBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZPosBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZPosBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZNegBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZNegBox = { "ZNegBox", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, ZNegBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZNegBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZNegBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelZ_MetaData[] = {
		{ "Category", "Player Variables" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelZ = { "IceLevelZ", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, IceLevelZ), METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelX_MetaData[] = {
		{ "Category", "Player Variables" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelX = { "IceLevelX", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, IceLevelX), METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelY_MetaData[] = {
		{ "Category", "Player Variables" },
		{ "Comment", "//350 Max limit for now for current hitbox strat\n" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
		{ "ToolTip", "350 Max limit for now for current hitbox strat" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelY = { "IceLevelY", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, IceLevelY), METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_InHazard_MetaData[] = {
		{ "Category", "Player Variables" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	void Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_InHazard_SetBit(void* Obj)
	{
		((AIceBoxPawn*)Obj)->InHazard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_InHazard = { "InHazard", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AIceBoxPawn), &Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_InHazard_SetBit, METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_InHazard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_InHazard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMeltMultiplier_MetaData[] = {
		{ "Category", "Player Variables" },
		{ "ModuleRelativePath", "IceBoxPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMeltMultiplier = { "IceMeltMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIceBoxPawn, IceMeltMultiplier), METADATA_PARAMS(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMeltMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMeltMultiplier_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XPosBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_XNegBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YPosBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_YNegBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZPosBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_ZNegBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceLevelY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_InHazard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIceBoxPawn_Statics::NewProp_IceMeltMultiplier,
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
		FuncInfo,
		Z_Construct_UClass_AIceBoxPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AIceBoxPawn, 1085706750);
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
