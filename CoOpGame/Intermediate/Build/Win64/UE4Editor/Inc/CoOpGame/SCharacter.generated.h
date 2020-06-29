// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COOPGAME_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define COOPGAME_SCharacter_generated_h

#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_SPARSE_DATA
#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire);


#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire);


#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__ZoomedFOV() { return STRUCT_OFFSET(ASCharacter, ZoomedFOV); } \
	FORCEINLINE static uint32 __PPO__DefaultFOV() { return STRUCT_OFFSET(ASCharacter, DefaultFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(ASCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ASCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__StartWeaponClass() { return STRUCT_OFFSET(ASCharacter, StartWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(ASCharacter, WeaponAttachSocketName); }


#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_13_PROLOG
#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_RPC_WRAPPERS \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_INCLASS \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_INCLASS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_SCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoOpGame_Source_CoOpGame_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
