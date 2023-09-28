// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Mause.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMause() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AMause_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AMause();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AMause::StaticRegisterNativesAMause()
	{
	}
	UClass* Z_Construct_UClass_AMause_NoRegister()
	{
		return AMause::StaticClass();
	}
	struct Z_Construct_UClass_AMause_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMause_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMause_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Mause.h" },
		{ "ModuleRelativePath", "Mause.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMause_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMause>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMause_Statics::ClassParams = {
		&AMause::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMause_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMause_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMause()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMause_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMause, 713371223);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AMause>()
	{
		return AMause::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMause(Z_Construct_UClass_AMause, &AMause::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AMause"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMause);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
