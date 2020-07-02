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
// End Cross Module References
	DEFINE_FUNCTION(ASPowerupAcotr::execOnTickPowerup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickPowerup();
		P_NATIVE_END;
	}
	static FName NAME_ASPowerupAcotr_OnActivated = FName(TEXT("OnActivated"));
	void ASPowerupAcotr::OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupAcotr_OnActivated),NULL);
	}
	static FName NAME_ASPowerupAcotr_OnExpired = FName(TEXT("OnExpired"));
	void ASPowerupAcotr::OnExpired()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASPowerupAcotr_OnExpired),NULL);
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
			{ "OnTickPowerup", &ASPowerupAcotr::execOnTickPowerup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerUps" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPowerupAcotr, nullptr, "OnActivated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPowerupAcotr_OnActivated_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnActivated, "OnActivated" }, // 3643934853
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnExpired, "OnExpired" }, // 3998159745
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnPowerupTicked, "OnPowerupTicked" }, // 3289763407
		{ &Z_Construct_UFunction_ASPowerupAcotr_OnTickPowerup, "OnTickPowerup" }, // 1181445210
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPowerupAcotr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPowerupAcotr.h" },
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
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
		{ "ModuleRelativePath", "Public/SPowerupAcotr.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_PowerupInterval = { "PowerupInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPowerupAcotr, PowerupInterval), METADATA_PARAMS(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_PowerupInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPowerupAcotr_Statics::NewProp_PowerupInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPowerupAcotr_Statics::PropPointers[] = {
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
	IMPLEMENT_CLASS(ASPowerupAcotr, 3474750846);
	template<> COOPGAME_API UClass* StaticClass<ASPowerupAcotr>()
	{
		return ASPowerupAcotr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPowerupAcotr(Z_Construct_UClass_ASPowerupAcotr, &ASPowerupAcotr::StaticClass, TEXT("/Script/CoOpGame"), TEXT("ASPowerupAcotr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPowerupAcotr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
