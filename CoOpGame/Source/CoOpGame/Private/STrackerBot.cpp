// Fill out your copyright notice in the Description page of Project Settings.


#include "STrackerBot.h"
#include <Components/StaticMeshComponent.h>
#include <Components/ActorComponent.h>
#include <NavigationPath.h>
#include <Kismet/GameplayStatics.h>
#include <NavigationSystem.h>
#include <GameFramework/Character.h>
#include "NavigationSystem/Public/NavigationSystem.h"
#include "NavigationSystem/Public/NavigationPath.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "Components/SHealthComp.h"
#include <DrawDebugHelpers.h>
#include <Components/SphereComponent.h>
#include "SCharacter.h"
#include <Sound/SoundCue.h>


// Sets default values
ASTrackerBot::ASTrackerBot()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NewMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = NewMeshComp;
	NewMeshComp->SetCanEverAffectNavigation(false);
	NewMeshComp->SetSimulatePhysics(true);

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetupAttachment(RootComponent);
	SphereComp->SetSphereRadius(200);
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	bUseVelocityChange = false;
	MovementForce = 1000;
	distanceToTargetThresh = 100;

	SelfDamageInterval = 0.25f;

	ExplosionRadius = 200;
	ExplosionDamage = 100;

	HealthComp = CreateDefaultSubobject<USHealthComp>(TEXT("myHealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ASTrackerBot::HandleTakeDamage);
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();

	

	GetWorldTimerManager().SetTimer(TimerHandle_DelayedBeginStart, this, &ASTrackerBot::DelayedBeginStart, 3.0f);
	
}

void ASTrackerBot::DelayedBeginStart()
{
	if (HasAuthority())
	{
		NextPathPoint = GetNextPathPoint();
	}
}



FVector ASTrackerBot::GetNextPathPoint()
{
	if (!HasAuthority()) return GetActorLocation();
	
		if (bExploded) return GetActorLocation();

		AActor* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
		UNavigationPath* navPath = UNavigationSystemV1::FindPathToActorSynchronously(this, GetActorLocation(), playerPawn);


		if (navPath->PathPoints.Num() > 1)
		{
			return navPath->PathPoints[1];
		}

	

		return GetActorLocation();
	


}

void ASTrackerBot::HandleTakeDamage(USHealthComp* HealthCompo, float Health, float HealthDelta, 
	const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	//explode

	if (MatInst == nullptr)
	{
		MatInst = NewMeshComp->CreateAndSetMaterialInstanceDynamicFromMaterial(0,NewMeshComp->GetMaterial(0));
	}
	if (MatInst)
	{

		MatInst->SetScalarParameterValue("LastTimeDamageTaken", GetWorld()->TimeSeconds);
	}

	UE_LOG(LogTemp, Log, TEXT("Healh %s of %s"), *FString::SanitizeFloat(Health), *GetName())

		if (Health <= 0)
		{
			SelfDestruct();
		}
}

void ASTrackerBot::SelfDestruct()
{
	if (bExploded) { return; }

	bExploded = true;

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());
	UGameplayStatics::SpawnSoundAtLocation(this, explodeSound, GetActorLocation());

	NewMeshComp->SetVisibility(false, true);
	NewMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	if (HasAuthority())
	{
		TArray<AActor*> IgnoredActors;
		IgnoredActors.Add(this);
		UGameplayStatics::ApplyRadialDamage(this, ExplosionDamage, GetActorLocation(), ExplosionRadius, nullptr, IgnoredActors, this, GetInstigatorController(), true);

		DrawDebugSphere(GetWorld(), GetActorLocation(), ExplosionRadius, 12, FColor::Red, false, 2.0f, 0, 1.0f);


		SetLifeSpan(2.0f);
	}
}

void ASTrackerBot::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (bStartedSelfDestruct) return;

	ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);
	if (PlayerPawn)
	{
		//overlapped player
		if (HasAuthority())
		{
			GetWorldTimerManager().SetTimer(TimerHandle_SelfDamage, this, &ASTrackerBot::DamageSelf, SelfDamageInterval, true, 0.0f);
		}

			bStartedSelfDestruct = true;

		UGameplayStatics::SpawnSoundAttached(SelfDestructSound, RootComponent);

		
	}
}

void ASTrackerBot::DamageSelf()
{
	UGameplayStatics::ApplyDamage(this, 20, GetInstigatorController(), this, nullptr);
}

// Called every frame
void ASTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasAuthority() && !bExploded)
	{
		float distanceToTarget = (GetActorLocation() - NextPathPoint).Size();

		if (distanceToTarget <= distanceToTargetThresh)
		{
			NextPathPoint = GetNextPathPoint();

		}
		else
		{
			FVector ForceDirection = NextPathPoint - GetActorLocation();
			ForceDirection.Normalize();
			ForceDirection *= MovementForce;
			//keep moving towards next target
			NewMeshComp->AddForce(ForceDirection, NAME_None, bUseVelocityChange);
		}
	}

}



