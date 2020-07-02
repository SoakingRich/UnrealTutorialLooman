// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerupAcotr.generated.h"

UCLASS()
class COOPGAME_API ASPowerupAcotr : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerupAcotr();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval;

	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
		int32 TotalNumOfTicks;

	FTimerHandle TimerHandle_PowerupTick;

	UFUNCTION()
		void OnTickPowerup();

	int32 TicksProcessed;


public:	
	// Called every frame

	void ActivatePowerup();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnActivated();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnExpired();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
		void OnPowerupTicked();

};
