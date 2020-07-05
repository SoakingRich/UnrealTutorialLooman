// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameMode.generated.h"



enum class EWaveState : uint8;

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, VictimActor, AActor*, KilledActor, AActor*, Ununused);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActorKilled, AActor*, VictimActor, AActor*, KilledActor)

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, VictimActor, AActor*, KillerActor, AController*, KillerController);

/**
 * 
 */
UCLASS()
class COOPGAME_API ASGameMode : public AGameModeBase
{
	GENERATED_BODY()


protected:

	//hook for bp to spawn single bot
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void SpawnNewBot();

	void SpawnBotTimerElapsed();


	//UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void StartWave();

	void StopWave();

	void PrepareForNextWave();



	FTimerHandle TimerHandle_BotSpawner;
	
	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
	float TimeBetweenWaves;

	int32 NumOfBotsToSpawn;

	UPROPERTY(VisibleAnywhere, Category = "GameMode")
	int32 WaveCount;

	void CheckWaveState();

	void CheckAnyPlayerAlive();

	void GameOver();

	FTimerHandle TimerHandle_NextWaveStart;

	void SetWaveState(EWaveState NewState);

	void RestartDeadPlayers();
	

public:

	virtual void StartPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	ASGameMode();

	UPROPERTY(BlueprintAssignable, Category = "GameMode")
		FOnActorKilled OnActorKilled;
	
};
