// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SExplosiveBarrel.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class USHealthComp;
class UParticleSystem;
class URadialForceComponent;
class UMaterialInterface;

UCLASS()
class COOPGAME_API ASExplosiveBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASExplosiveBarrel();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mesh")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Collision")
	USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	USHealthComp* HealthComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Collision")
	TSubclassOf<UDamageType> myDamageType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UParticleSystem* myParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	URadialForceComponent* RadialForceComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
		UMaterialInterface* ExplodedMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		float DamageAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
		float ForceAmount;

	UPROPERTY(ReplicatedUsing=OnRep_Explode)
	bool bExploded;

	UFUNCTION()
		void OnRep_Explode();

	void Explode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnHealthChanged(USHealthComp* HealthCompo, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	
	

};
