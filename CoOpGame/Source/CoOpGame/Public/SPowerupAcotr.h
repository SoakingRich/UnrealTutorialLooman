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
	

	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
	float PowerupInterval;

	UPROPERTY(EditDefaultsOnly, Category = "Powerups")
		int32 TotalNumOfTicks;

	FTimerHandle TimerHandle_PowerupTick;

	UFUNCTION()
		void OnTickPowerup();

	UPROPERTY(EditAnywhere, Category = "Powerups")
	int32 TicksProcessed;

	UPROPERTY(ReplicatedUsing=OnRep_PowerupActive)
	bool bPowerUpActive;

	UFUNCTION()
	void OnRep_PowerupActive();


public:	
	// Called every frame

	UFUNCTION()
	void ActivatePowerup(AActor* ActivateFor);

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnActivated(AActor* ActivateFor);

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnExpired();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
		void OnPowerupTicked();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
		void OnPowerupStateChanged(bool bNewPowerupIsActive);



};
