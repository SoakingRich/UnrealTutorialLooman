// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"
#include "Engine/EngineTypes.h"
#include "TimerManager.h"
#include "Components/SHealthComp.h"


ASGameMode::ASGameMode()
{
	TimeBetweenWaves = 2.0f;

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.0f;
}

void ASGameMode::StartPlay()
{
	Super::StartPlay();

	PrepareForNextWave();
}


void ASGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckWaveState();
}

void ASGameMode::StartWave()
{
	WaveCount++;

	NumOfBotsToSpawn = 2 * WaveCount;

	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawner, this, &ASGameMode::SpawnBotTimerElapsed, 1.0f, true, 0.0f);


	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("NewWave"));

}

void ASGameMode::SpawnBotTimerElapsed()
{
	//if (NumOfBotsToSpawn <= 0) return;

	SpawnNewBot();

	NumOfBotsToSpawn--;

	if (NumOfBotsToSpawn <= 0)
	{
		StopWave();
	}
}

void ASGameMode::StopWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawner);

	//PrepareForNextWave();
}

void ASGameMode::CheckWaveState()
{
	bool bIsPreparingForWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);

	if (NumOfBotsToSpawn > 0 || bIsPreparingForWave) return;

	bool bIsAnyBotAlive = false;

	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
	{
		APawn* TestPawn = It->Get();
		if (TestPawn == nullptr || TestPawn->IsPlayerControlled())
		{
			continue;
		}

		USHealthComp* HealthComp = Cast<USHealthComp>(TestPawn->GetComponentByClass(USHealthComp::StaticClass()));
		if (HealthComp && HealthComp->GetHealth() > 0.0f)
		{
			bIsAnyBotAlive = true;
			break;
		}

	}

	if (!bIsAnyBotAlive)
	{
		PrepareForNextWave();
	}

}

void ASGameMode::PrepareForNextWave()
{
	
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ASGameMode::StartWave, 1.0f, false, 0.0f);
}





