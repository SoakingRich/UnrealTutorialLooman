// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COOPGAME_SPowerupAcotr_generated_h
#error "SPowerupAcotr.generated.h already included, missing '#pragma once' in SPowerupAcotr.h"
#endif
#define COOPGAME_SPowerupAcotr_generated_h

#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_SPARSE_DATA
#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivatePowerup); \
	DECLARE_FUNCTION(execOnRep_PowerupActive); \
	DECLARE_FUNCTION(execOnTickPowerup);


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivatePowerup); \
	DECLARE_FUNCTION(execOnRep_PowerupActive); \
	DECLARE_FUNCTION(execOnTickPowerup);


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_EVENT_PARMS \
	struct SPowerupAcotr_eventOnActivated_Parms \
	{ \
		AActor* ActivateFor; \
	}; \
	struct SPowerupAcotr_eventOnPowerupStateChanged_Parms \
	{ \
		bool bNewPowerupIsActive; \
	};


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_CALLBACK_WRAPPERS
#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPowerupAcotr(); \
	friend struct Z_Construct_UClass_ASPowerupAcotr_Statics; \
public: \
	DECLARE_CLASS(ASPowerupAcotr, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupAcotr) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bPowerUpActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bPowerUpActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASPowerupAcotr(); \
	friend struct Z_Construct_UClass_ASPowerupAcotr_Statics; \
public: \
	DECLARE_CLASS(ASPowerupAcotr, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASPowerupAcotr) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bPowerUpActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=bPowerUpActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPowerupAcotr(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPowerupAcotr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupAcotr); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupAcotr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupAcotr(ASPowerupAcotr&&); \
	NO_API ASPowerupAcotr(const ASPowerupAcotr&); \
public:


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPowerupAcotr(ASPowerupAcotr&&); \
	NO_API ASPowerupAcotr(const ASPowerupAcotr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPowerupAcotr); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPowerupAcotr); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPowerupAcotr)


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerupInterval() { return STRUCT_OFFSET(ASPowerupAcotr, PowerupInterval); } \
	FORCEINLINE static uint32 __PPO__TotalNumOfTicks() { return STRUCT_OFFSET(ASPowerupAcotr, TotalNumOfTicks); } \
	FORCEINLINE static uint32 __PPO__TicksProcessed() { return STRUCT_OFFSET(ASPowerupAcotr, TicksProcessed); } \
	FORCEINLINE static uint32 __PPO__bPowerUpActive() { return STRUCT_OFFSET(ASPowerupAcotr, bPowerUpActive); }


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_9_PROLOG \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_EVENT_PARMS


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_RPC_WRAPPERS \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_CALLBACK_WRAPPERS \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_INCLASS \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_CALLBACK_WRAPPERS \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_INCLASS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASPowerupAcotr>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoOpGame_Source_CoOpGame_Public_SPowerupAcotr_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
