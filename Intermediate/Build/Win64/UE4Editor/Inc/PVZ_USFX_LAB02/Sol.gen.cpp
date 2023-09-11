// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Sol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSol() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ASol_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ASol();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_URandomMovementComponent_NoRegister();
// End Cross Module References
	void ASol::StaticRegisterNativesASol()
	{
	}
	UClass* Z_Construct_UClass_ASol_NoRegister()
	{
		return ASol::StaticClass();
	}
	struct Z_Construct_UClass_ASol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Sol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Sol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RandomMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sol.h" },
		{ "ModuleRelativePath", "Sol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASol_Statics::NewProp_SM_Sol_MetaData[] = {
		{ "Category", "Sol" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASol_Statics::NewProp_SM_Sol = { "SM_Sol", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASol, SM_Sol), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASol_Statics::NewProp_SM_Sol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASol_Statics::NewProp_SM_Sol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASol_Statics::NewProp_RandomMovement_MetaData[] = {
		{ "Category", "Sol" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASol_Statics::NewProp_RandomMovement = { "RandomMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASol, RandomMovement), Z_Construct_UClass_URandomMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASol_Statics::NewProp_RandomMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASol_Statics::NewProp_RandomMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASol_Statics::NewProp_SM_Sol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASol_Statics::NewProp_RandomMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASol_Statics::ClassParams = {
		&ASol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASol_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASol, 3787214405);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ASol>()
	{
		return ASol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASol(Z_Construct_UClass_ASol, &ASol::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ASol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
