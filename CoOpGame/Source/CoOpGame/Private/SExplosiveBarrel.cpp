// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SHealthComp.h"
#include "CoOpGame/CoOpGame.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "DrawDebugHelpers.h"
#include "Net/UnrealNetwork.h"

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
	
	SetReplicates(true);
	
	

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

	if (!HasAuthority())
	{
		return;
	}


	if (HealthComp->GetHealth() <= 0)
	{
		bExploded = true;
		Explode();

		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(nullptr);
		UGameplayStatics::ApplyRadialDamage(GetWorld(), DamageAmount, GetActorLocation(), Radius * 2, myDamageType, IgnoredActors);
		DrawDebugSphere(GetWorld(), GetActorLocation(), Radius * 2, 16, FColor::Yellow, false, 5.0f);
		RadialForceComp->FireImpulse();

		
		
	}
}

void ASExplosiveBarrel::OnRep_Explode()
{
	Explode();
}

void ASExplosiveBarrel::Explode()
{

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), myParticles, GetActorLocation());
	StaticMesh->SetMaterial(0, ExplodedMaterial);


}

void ASExplosiveBarrel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASExplosiveBarrel, bExploded);
}

