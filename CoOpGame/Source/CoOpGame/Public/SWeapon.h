// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SWeapon.generated.h"

class USkeletalMeshComponent;
class UDamageType;
class UParticleSystem;


//contains info of a single sweapon line trace
USTRUCT()
struct FHitscanTrace
{
	GENERATED_BODY()

public: 

	UPROPERTY()
	TEnumAsByte<EPhysicalSurface> SurfaceTypeRep;
	UPROPERTY()
		FVector_NetQuantize  TraceTo;
		UPROPERTY()
		FVector_NetQuantize  TraceFrom;
};

UCLASS()
class COOPGAME_API ASWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASWeapon();

protected:
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;

	virtual void BeginPlay() override;

	void PlayFireEffects(FVector TracerEndPoint);
	

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName MuzzleSocketName;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		FName TracerTargetName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UParticleSystem* MuzzleEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* DefaultImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* FleshImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UParticleSystem* TracerEffect;

	UPROPERTY(EditDefaultsOnly,  Category = "Weapon")
	TSubclassOf<UCameraShake> FireCamShake;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	float BaseDamage;

		void Fire();

		FTimerHandle TimerHandle_TimeBetweenShots;

		float LastFireTime;

		UPROPERTY(EditDefaultsOnly, Category = "Weapon")
		float RateOfFire;

		//derived from rate of fire
		float TimeBetweenShots;

		UPROPERTY(ReplicatedUsing=OnRep_HitScanTrace)
		FHitscanTrace HitScanTrace;

		UFUNCTION()
		void OnRep_HitScanTrace();

		void PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint);

public:	

	UFUNCTION(Server, Reliable, WithValidation)
		void ServerFire();
	

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void StartFire();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
		void StopFire();

};
