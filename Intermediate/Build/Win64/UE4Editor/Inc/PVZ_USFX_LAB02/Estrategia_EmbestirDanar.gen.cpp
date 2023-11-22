// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Estrategia_EmbestirDanar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategia_EmbestirDanar() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategia_EmbestirDanar_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AEstrategia_EmbestirDanar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UEstrategia_Embestida_NoRegister();
// End Cross Module References
	void AEstrategia_EmbestirDanar::StaticRegisterNativesAEstrategia_EmbestirDanar()
	{
	}
	UClass* Z_Construct_UClass_AEstrategia_EmbestirDanar_NoRegister()
	{
		return AEstrategia_EmbestirDanar::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class APlantEmbestida;\n" },
		{ "IncludePath", "Estrategia_EmbestirDanar.h" },
		{ "ModuleRelativePath", "Estrategia_EmbestirDanar.h" },
		{ "ToolTip", "class APlantEmbestida;" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstrategia_Embestida_NoRegister, (int32)VTABLE_OFFSET(AEstrategia_EmbestirDanar, IEstrategia_Embestida), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategia_EmbestirDanar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics::ClassParams = {
		&AEstrategia_EmbestirDanar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategia_EmbestirDanar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstrategia_EmbestirDanar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstrategia_EmbestirDanar, 3114119210);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AEstrategia_EmbestirDanar>()
	{
		return AEstrategia_EmbestirDanar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstrategia_EmbestirDanar(Z_Construct_UClass_AEstrategia_EmbestirDanar, &AEstrategia_EmbestirDanar::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AEstrategia_EmbestirDanar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategia_EmbestirDanar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
