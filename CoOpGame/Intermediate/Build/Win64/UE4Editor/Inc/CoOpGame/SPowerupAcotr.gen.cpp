// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoOpGame/Public/SPowerupAcotr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPowerupAcotr() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupAcotr_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASPowerupAcotr();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoOpGame();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASPowerupAcotr::execActivatePowerup)
	{
		P_GET_OBJECT(AActor,Z_Param_ActivateFor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatePowerup(Z_Param_ActivateFor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPowerupAcotr::execOnRep_PowerupActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PowerupActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPowerupAcotr::execOnTickPowerup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickPowerup();
		P_NATIVE_END;
	}
	static FName NAME_ASPowerupAcotr_OnActivated = FName(TEXT("OnActivated"));
	void ASPowerupAcotr::OnActivated(AActor* ActivateFor)
	{
		SPowerupAcotr_eventOnActivated_Parms Parms;
		Parms.ActivateFor=ActivateFor;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupAcotr_OnActivated),&Parms);
	}
	static FName NAME_ASPowerupAcotr_OnExpired = FName(TEXT("OnExpired"));
	void ASPowerupAcotr::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupAcotr_OnExpired),NULL);
	}
	static FName NAME_ASPowerupAcotr_OnPowerupStateChanged = FName(TEXT("OnPowerupStateChanged"));
	void ASPowerupAcotr::OnPowerupStateChanged(bool bNewPowerupIsActive)
	{
		SPowerupAcotr_eventOnPowerupStateChanged_Parms Parms;
		Parms.bNewPowerupIsActive=bNewPowerupIsActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupAcotr_OnPowerupStateChanged),&Parms);
	}
	static FName NAME_ASPowerupAcotr_OnPowerupTicked = FName(TEXT("OnPowerupTicked"));
	void ASPowerupAcotr::OnPowerupTicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupAcotr_OnPowerupTicked),NULL);
	}
	void ASPowerupAcotr::StaticRegisterNativesASPowerupAcotr()
	{
		UClass* Class = ASPowerupAcotr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivatePowerup", &ASPowerupAcotr::execActivatePowerup },
			{ "OnRep_PowerupActive", &ASPowerupAcotr::execOnRep_PowerupActive },
			{ "OnTickPowerup", &ASPowerupAcotr::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics
	{
		struct SPowerupAcotr_eventActivatePowerup_Parms
		{
			AActor* ActivateFor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateFor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::NewProp_ActivateFor = { "ActivateFor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPowerupAcotr_eventActivatePowerup_Parms, ActivateFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::NewProp_ActivateFor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called every frame\n" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
		{ "ToolTip", "Called every frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupAcotr, nullptr, "ActivatePowerup", nullptr, nullptr, sizeof(SPowerupAcotr_eventActivatePowerup_Parms), Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivateFor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::NewProp_ActivateFor = { "ActivateFor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPowerupAcotr_eventOnActivated_Parms, ActivateFor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::NewProp_ActivateFor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupAcotr, nullptr, "OnActivated", nullptr, nullptr, sizeof(SPowerupAcotr_eventOnActivated_Parms), Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupAcotr_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupAcotr_OnExpired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupAcotr_OnExpired_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupAcotr_OnExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupAcotr, nullptr, "OnExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupAcotr_OnExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupAcotr_OnExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupAcotr_OnExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics
	{
		static void NewProp_bNewPowerupIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewPowerupIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::NewProp_bNewPowerupIsActive_SetBit(void* Obj)
	{
		((SPowerupAcotr_eventOnPowerupStateChanged_Parms*)Obj)->bNewPowerupIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::NewProp_bNewPowerupIsActive = { "bNewPowerupIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SPowerupAcotr_eventOnPowerupStateChanged_Parms), &Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::NewProp_bNewPowerupIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::NewProp_bNewPowerupIsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupAcotr, nullptr, "OnPowerupStateChanged", nullptr, nullptr, sizeof(SPowerupAcotr_eventOnPowerupStateChanged_Parms), Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupAcotr, nullptr, "OnPowerupTicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupAcotr_OnRep_PowerupActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupAcotr_OnRep_PowerupActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupAcotr_OnRep_PowerupActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupAcotr, nullptr, "OnRep_PowerupActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupAcotr_OnRep_PowerupActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnRep_PowerupActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupAcotr_OnRep_PowerupActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupAcotr_OnRep_PowerupActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupAcotr, nullptr, "OnTickPowerup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPowerupAcotr_NoRegister()
	{
		return ASPowerupAcotr::StaticClass();
	}
	struct Z_Construct_UClass_ASPowerupAcotr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPowerUpActive_MetaData[];
#endif
		static void NewProp_bPowerUpActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPowerUpActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicksProcessed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TicksProcessed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNumOfTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNumOfTicks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerupInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerupInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPowerupAcotr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoOpGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPowerupAcotr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPowerupAcotr_ActivatePowerup, "ActivatePowerup" }, // 2270234470
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnActivated, "OnActivated" }, // 2869937435
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnExpired, "OnExpired" }, // 3998159745
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnPowerupStateChanged, "OnPowerupStateChanged" }, // 1824794674
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked, "OnPowerupTicked" }, // 3289763407
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnRep_PowerupActive, "OnRep_PowerupActive" }, // 1942088517
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup, "OnTickPowerup" }, // 1181445210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupAcotr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPowerupAcotr.h" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_bPowerUpActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	void Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_bPowerUpActive_SetBit(void* Obj)
	{
		((ASPowerupAcotr*)Obj)->bPowerUpActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_bPowerUpActive = { "bPowerUpActive", "OnRep_PowerupActive", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASPowerupAcotr), &Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_bPowerUpActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_bPowerUpActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_bPowerUpActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TicksProcessed_MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TicksProcessed = { "TicksProcessed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupAcotr, TicksProcessed), METADATA_PARAMS(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TicksProcessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TicksProcessed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TotalNumOfTicks_MetaData[] = {
		{ "Category", "Powerups" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TotalNumOfTicks = { "TotalNumOfTicks", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupAcotr, TotalNumOfTicks), METADATA_PARAMS(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TotalNumOfTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TotalNumOfTicks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_PowerupInterval_MetaData[] = {
		{ "Category", "Powerups" },
		{ "Comment", "// Called when the game starts or when spawned\n" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
		{ "ToolTip", "Called when the game starts or when spawned" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_PowerupInterval = { "PowerupInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupAcotr, PowerupInterval), METADATA_PARAMS(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_PowerupInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_PowerupInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPowerupAcotr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_bPowerUpActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TicksProcessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_TotalNumOfTicks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_PowerupInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPowerupAcotr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPowerupAcotr>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPowerupAcotr_Statics::ClassParams = {
		&ASPowerupAcotr::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPowerupAcotr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupAcotr_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPowerupAcotr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupAcotr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPowerupAcotr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPowerupAcotr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPowerupAcotr, 2266848603);
	template<> COOPGAME_API UClass* StaticClass<ASPowerupAcotr>()
	{
		return ASPowerupAcotr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerupAcotr(Z_Construct_UClass_ASPowerupAcotr, &ASPowerupAcotr::StaticClass, TEXT("/Script/CoOpGame"), TEXT("ASPowerupAcotr"), false, nullptr, nullptr, nullptr);

	void ASPowerupAcotr::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bPowerUpActive(TEXT("bPowerUpActive"));

		const bool bIsValid = true
			&& Name_bPowerUpActive == ClassReps[(int32)ENetFields_Private::bPowerUpActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASPowerupAcotr"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerupAcotr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
