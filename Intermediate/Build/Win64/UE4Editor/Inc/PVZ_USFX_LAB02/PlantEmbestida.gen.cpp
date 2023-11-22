// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/PlantEmbestida.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlantEmbestida() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlantEmbestida_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlantEmbestida();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlantEmbestida::execOnOverlapBeginFunction)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBeginFunction(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APlantEmbestida::StaticRegisterNativesAPlantEmbestida()
	{
		UClass* Class = APlantEmbestida::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBeginFunction", &APlantEmbestida::execOnOverlapBeginFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics
	{
		struct PlantEmbestida_eventOnOverlapBeginFunction_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlantEmbestida_eventOnOverlapBeginFunction_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlantEmbestida_eventOnOverlapBeginFunction_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlantEmbestida_eventOnOverlapBeginFunction_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlantEmbestida_eventOnOverlapBeginFunction_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PlantEmbestida_eventOnOverlapBeginFunction_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlantEmbestida_eventOnOverlapBeginFunction_Parms), &Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlantEmbestida_eventOnOverlapBeginFunction_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);\n" },
		{ "ModuleRelativePath", "PlantEmbestida.h" },
		{ "ToolTip", "void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlantEmbestida, nullptr, "OnOverlapBeginFunction", nullptr, nullptr, sizeof(PlantEmbestida_eventOnOverlapBeginFunction_Parms), Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlantEmbestida_NoRegister()
	{
		return APlantEmbestida::StaticClass();
	}
	struct Z_Construct_UClass_APlantEmbestida_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColisionPlanta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColisionPlanta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlantEmbestida_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlantEmbestida_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlantEmbestida_OnOverlapBeginFunction, "OnOverlapBeginFunction" }, // 1945975456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlantEmbestida_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlantEmbestida.h" },
		{ "ModuleRelativePath", "PlantEmbestida.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlantEmbestida_Statics::NewProp_ColisionPlanta_MetaData[] = {
		{ "Category", "PlantEmbestida" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlantEmbestida.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlantEmbestida_Statics::NewProp_ColisionPlanta = { "ColisionPlanta", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlantEmbestida, ColisionPlanta), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlantEmbestida_Statics::NewProp_ColisionPlanta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlantEmbestida_Statics::NewProp_ColisionPlanta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlantEmbestida_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlantEmbestida_Statics::NewProp_ColisionPlanta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlantEmbestida_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlantEmbestida>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlantEmbestida_Statics::ClassParams = {
		&APlantEmbestida::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlantEmbestida_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlantEmbestida_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlantEmbestida_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlantEmbestida_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlantEmbestida()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlantEmbestida_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlantEmbestida, 1637511777);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<APlantEmbestida>()
	{
		return APlantEmbestida::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlantEmbestida(Z_Construct_UClass_APlantEmbestida, &APlantEmbestida::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("APlantEmbestida"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlantEmbestida);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
