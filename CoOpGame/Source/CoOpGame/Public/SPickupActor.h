// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPickupActor.generated.h"

class USphereComponent;
class UDecalComponent;
class ASPowerupAcotr;

UCLASS()
class COOPGAME_API ASPickupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPickupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
	USphereComponent* SphereComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HealthComponent")
	UDecalComponent* decalComp;

	UPROPERTY(EditInstanceOnly, Category = "PickupActor")
	TSubclassOf<ASPowerupAcotr> PowerUpClass;

	ASPowerupAcotr* PowerUpInstance;

	UPROPERTY(EditInstanceOnly, Category = "PickupActor")
	float CooldownDuration;

	FTimerHandle TimerHandle_RespawnTimer;

	UFUNCTION()
	void Respawn();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
