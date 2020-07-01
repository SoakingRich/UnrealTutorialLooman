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


// Sets default values
ASTrackerBot::ASTrackerBot()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	NewMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = NewMeshComp;
	NewMeshComp->SetCanEverAffectNavigation(false);
	NewMeshComp->SetSimulatePhysics(true);


	bUseVelocityChange = false;
	MovementForce = 1000;
	distanceToTargetThresh = 100;

	HealthComp = CreateDefaultSubobject<USHealthComp>(TEXT("myHealthComp"));
	HealthComp->OnHealthChanged.AddDynamic(this, &ASTrackerBot::HandleTakeDamage);
}

// Called when the game starts or when spawned
void ASTrackerBot::BeginPlay()
{
	Super::BeginPlay();

	NextPathPoint = GetNextPathPoint();
	
}

FVector ASTrackerBot::GetNextPathPoint()
{

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

	//pulse material on hit

	UE_LOG(LogTemp, Log, TEXT("Healh %s of %s"), *FString::SanitizeFloat(Health), *GetName())
}

// Called every frame
void ASTrackerBot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
		NewMeshComp->AddForce(ForceDirection,NAME_None,bUseVelocityChange);
	}

}



