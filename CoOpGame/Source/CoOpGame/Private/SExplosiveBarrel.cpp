// Fill out your copyright notice in the Description page of Project Settings.


#include "SExplosiveBarrel.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SHealthComp.h"
#include "CoOpGame/CoOpGame.h"
#include "GameFramework/DamageType.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/RadialForceComponent.h"

// Sets default values
ASExplosiveBarrel::ASExplosiveBarrel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;

	StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	StaticMesh->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Block);
	

	HealthComp = CreateDefaultSubobject<USHealthComp>(TEXT("BarrelHealthComp"));

	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForce"));
	RadialForceComp->SetupAttachment(RootComponent);
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

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("got damage"));

	if (HealthComp->Health <= 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("EXPLODED111"));

		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(DamageCauser);
		UGameplayStatics::ApplyRadialDamage(GetWorld(), DamageAmount, GetActorLocation(), Radius, myDamageType, IgnoredActors);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), myParticles, GetActorLocation());
		RadialForceComp->FireImpulse();
		
	}
}


