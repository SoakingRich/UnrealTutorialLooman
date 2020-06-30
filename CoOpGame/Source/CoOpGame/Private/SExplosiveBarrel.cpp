// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SHealthComp.h"
#include "CoOpGame/CoOpGame.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
ASExplosiveBarrel::ASExplosiveBarrel()
{
 	

	HealthComp = CreateDefaultSubobject<USHealthComp>(TEXT("BarrelHealthComp"));

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetSimulatePhysics(true);
	StaticMesh->SetCollisionObjectType(ECC_PhysicsBody);
	RootComponent = StaticMesh;

	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForce"));
	RadialForceComp->SetupAttachment(RootComponent);
	RadialForceComp->Radius = 250;
	RadialForceComp->bImpulseVelChange = true;
	RadialForceComp->bAutoActivate = false;
	RadialForceComp->bIgnoreOwningActor = true;
	
	

}

// Called when the game starts or when spawned
void ASExplosiveBarrel::BeginPlay()
{
	Super::BeginPlay();

	HealthComp->OnHealthChanged.AddDynamic(this, &ASExplosiveBarrel::OnHealthChanged);
	RadialForceComp->ForceStrength = ForceAmount;
	
}

// Called every frame
void ASExplosiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASExplosiveBarrel::OnHealthChanged(USHealthComp* HealthCompo, float Health, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (bExploded) return;


	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("got damage"));


	if (HealthComp->Health <= 0)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("EXPLODED111"));

		StaticMesh->AddImpulse(GetActorUpVector(), NAME_None, true);

		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(DamageCauser);
		UGameplayStatics::ApplyRadialDamage(GetWorld(), DamageAmount, GetActorLocation(), Radius * 2, myDamageType, IgnoredActors);
		DrawDebugSphere(GetWorld(), GetActorLocation(), Radius * 2, 16, FColor::Yellow, false, 5.0f);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), myParticles, GetActorLocation());
		StaticMesh->SetMaterial(0, ExplodedMaterial);
		
		RadialForceComp->FireImpulse();

		bExploded = true;
		
	}
}


