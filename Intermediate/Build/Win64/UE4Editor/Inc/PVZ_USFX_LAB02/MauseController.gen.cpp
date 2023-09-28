// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/MauseController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMauseController() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AMauseController_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AMauseController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AMauseController::StaticRegisterNativesAMauseController()
	{
	}
	UClass* Z_Construct_UClass_AMauseController_NoRegister()
	{
		return AMauseController::StaticClass();
	}
	struct Z_Construct_UClass_AMauseController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMauseController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMauseController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MauseController.h" },
		{ "ModuleRelativePath", "MauseController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMauseController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMauseController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMauseController_Statics::ClassParams = {
		&AMauseController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMauseController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMauseController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMauseController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMauseController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMauseController, 773151720);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AMauseController>()
	{
		return AMauseController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMauseController(Z_Construct_UClass_AMauseController, &AMauseController::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AMauseController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMauseController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
