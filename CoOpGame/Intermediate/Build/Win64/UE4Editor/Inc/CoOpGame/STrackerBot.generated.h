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
struct FVector;
#ifdef COOPGAME_STrackerBot_generated_h
#error "STrackerBot.generated.h already included, missing '#pragma once' in STrackerBot.h"
#endif
#define COOPGAME_STrackerBot_generated_h

#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_SPARSE_DATA
#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage); \
	DECLARE_FUNCTION(execGetNextPathPoint);


#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeDamage); \
	DECLARE_FUNCTION(execGetNextPathPoint);


#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend struct Z_Construct_UClass_ASTrackerBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot)


#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend struct Z_Construct_UClass_ASTrackerBot_Statics; \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoOpGame"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot)


#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public:


#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackerBot)


#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NewMeshComp() { return STRUCT_OFFSET(ASTrackerBot, NewMeshComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASTrackerBot, HealthComp); } \
	FORCEINLINE static uint32 __PPO__MovementForce() { return STRUCT_OFFSET(ASTrackerBot, MovementForce); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ASTrackerBot, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__distanceToTargetThresh() { return STRUCT_OFFSET(ASTrackerBot, distanceToTargetThresh); }


#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_11_PROLOG
#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_RPC_WRAPPERS \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_INCLASS \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_PRIVATE_PROPERTY_OFFSET \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_SPARSE_DATA \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_INCLASS_NO_PURE_DECLS \
	CoOpGame_Source_CoOpGame_Public_STrackerBot_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COOPGAME_API UClass* StaticClass<class ASTrackerBot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CoOpGame_Source_CoOpGame_Public_STrackerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
