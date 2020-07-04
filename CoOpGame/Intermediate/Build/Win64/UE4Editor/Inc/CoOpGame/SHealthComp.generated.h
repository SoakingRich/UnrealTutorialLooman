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
#ifdef COOPGAME_SHealthComp_generated_h
#error "SHealthComp.generated.h already included, missing '#pragma once' in SHealthComp.h"
#endif
#define COOPGAME_SHealthComp_generated_h

#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_10_DELEGATE \
struct _Script_CoOpGame_eventOnHealthChangedSignature_Parms \
{ \
	USHealthComp* HealthComp; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, USHealthComp* HealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_CoOpGame_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_SPARSE_DATA
#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execHandleTakeAnyDamage); \
	DECLARE_FUNCTION(execOnRep_Health);


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execHandleTakeAnyDamage); \
	DECLARE_FUNCTION(execOnRep_Health);


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHealthComp(); \
	friend struct Z_Construct_UClass_USHealthComp_Statics; \
public: \
	DECLARE_CLASS(USHealthComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(USHealthComp) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSHealthComp(); \
	friend struct Z_Construct_UClass_USHealthComp_Statics; \
public: \
	DECLARE_CLASS(USHealthComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(USHealthComp) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		NETFIELD_REP_END=Health	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USHealthComp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USHealthComp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComp(USHealthComp&&); \
	NO_API USHealthComp(const USHealthComp&); \
public:


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComp(USHealthComp&&); \
	NO_API USHealthComp(const USHealthComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHealthComp)


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USHealthComp, Health); } \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(USHealthComp, DefaultHealth); }


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_12_PROLOG
#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_RPC_WRAPPERS \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_INCLASS \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_INCLASS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class USHealthComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoOpGame_Source_CoOpGame_Public_Components_SHealthComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
