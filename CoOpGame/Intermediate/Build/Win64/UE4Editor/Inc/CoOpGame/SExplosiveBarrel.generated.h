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

#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_SPARSE_DATA
#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnRep_Explode);


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChanged); \
	DECLARE_FUNCTION(execOnRep_Explode);


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_STANDARD_CONSTRUCTORS \
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


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASExplosiveBarrel(ASExplosiveBarrel&&); \
	NO_API ASExplosiveBarrel(const ASExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosiveBarrel)


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET
#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_16_PROLOG
#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_RPC_WRAPPERS \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_INCLASS \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_INCLASS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoOpGame_Source_CoOpGame_Public_SExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
