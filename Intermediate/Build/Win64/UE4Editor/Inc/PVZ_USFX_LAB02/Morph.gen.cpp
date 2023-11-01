// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Morph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMorph() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UMorph_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UMorph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void UMorph::StaticRegisterNativesUMorph()
	{
	}
	UClass* Z_Construct_UClass_UMorph_NoRegister()
	{
		return UMorph::StaticClass();
	}
	struct Z_Construct_UClass_UMorph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMorph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMorph_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Morph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMorph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMorph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMorph_Statics::ClassParams = {
		&UMorph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMorph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMorph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMorph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMorph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMorph, 1656017462);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UMorph>()
	{
		return UMorph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMorph(Z_Construct_UClass_UMorph, &UMorph::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UMorph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMorph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
