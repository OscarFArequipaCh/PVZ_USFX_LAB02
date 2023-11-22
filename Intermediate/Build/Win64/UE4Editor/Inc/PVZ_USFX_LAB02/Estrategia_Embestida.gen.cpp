// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Estrategia_Embestida.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategia_Embestida() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UEstrategia_Embestida_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UEstrategia_Embestida();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void UEstrategia_Embestida::StaticRegisterNativesUEstrategia_Embestida()
	{
	}
	UClass* Z_Construct_UClass_UEstrategia_Embestida_NoRegister()
	{
		return UEstrategia_Embestida::StaticClass();
	}
	struct Z_Construct_UClass_UEstrategia_Embestida_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstrategia_Embestida_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstrategia_Embestida_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Estrategia_Embestida.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstrategia_Embestida_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstrategia_Embestida>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstrategia_Embestida_Statics::ClassParams = {
		&UEstrategia_Embestida::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstrategia_Embestida_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstrategia_Embestida_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstrategia_Embestida()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstrategia_Embestida_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstrategia_Embestida, 3627571612);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UEstrategia_Embestida>()
	{
		return UEstrategia_Embestida::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstrategia_Embestida(Z_Construct_UClass_UEstrategia_Embestida, &UEstrategia_Embestida::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UEstrategia_Embestida"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstrategia_Embestida);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
