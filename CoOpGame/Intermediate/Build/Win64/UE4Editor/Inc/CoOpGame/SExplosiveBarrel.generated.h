// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComp;
class UDamageType;
class AController;
class AActor;
#ifdef COOPGAME_SExplosiveBarrel_generated_h
#error "SExplosiveBarrel.generated.h already included, missing '#pragma once' in SExplosiveBarrel.h"
#endif
#define COOPGAME_SExplosiveBarrel_generated_h

#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_SPARSE_DATA
#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged);


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged);


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASExplosiveBarrel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASExplosiveBarrel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public:


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosiveBarrel)


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_PRIVATE_PROPERTY_OFFSET
#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_15_PROLOG
#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_RPC_WRAPPERS \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_INCLASS \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_INCLASS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
