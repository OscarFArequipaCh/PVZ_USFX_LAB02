// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVZ_USFX_LAB02_Misiles_generated_h
#error "Misiles.generated.h already included, missing '#pragma once' in Misiles.h"
#endif
#define PVZ_USFX_LAB02_Misiles_generated_h

#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_SPARSE_DATA
#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMisiles(); \
	friend struct Z_Construct_UClass_AMisiles_Statics; \
public: \
	DECLARE_CLASS(AMisiles, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(AMisiles) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMisiles(); \
	friend struct Z_Construct_UClass_AMisiles_Statics; \
public: \
	DECLARE_CLASS(AMisiles, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(AMisiles) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMisiles(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMisiles) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMisiles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMisiles); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMisiles(AMisiles&&); \
	NO_API AMisiles(const AMisiles&); \
public:


#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMisiles(AMisiles&&); \
	NO_API AMisiles(const AMisiles&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMisiles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMisiles); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMisiles)


#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AMisiles, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMisiles, ProjectileMovement); }


#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_9_PROLOG
#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_SPARSE_DATA \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_RPC_WRAPPERS \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_INCLASS \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_SPARSE_DATA \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_INCLASS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_USFX_LAB02_API UClass* StaticClass<class AMisiles>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_USFX_LAB02_Source_PVZ_USFX_LAB02_Misiles_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
