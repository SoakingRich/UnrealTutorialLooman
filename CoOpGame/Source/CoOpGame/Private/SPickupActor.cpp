// Fill out your copyright notice in the Description page of Project Settings.


#include "SPickupActor.h"
#include "Components/DecalComponent.h"
#include "Components/SphereComponent.h"
#include "SPowerupAcotr.h"
#include "SCharacter.h"

// Sets default values
ASPickupActor::ASPickupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("MeshComp"));
	SphereComp->SetSphereRadius(75);
	RootComponent = SphereComp;

	decalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	decalComp->SetRelativeRotation(FRotator(0, 90, 0));
	decalComp->DecalSize = FVector(64, 75, 75);
	decalComp->SetupAttachment(RootComponent);

	CooldownDuration = 10.0f;

	SetReplicates(true);

	

	

}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();

	
		Respawn();
	
}

void ASPickupActor::Respawn()
{
	if (!HasAuthority()) return;

	if (PowerUpClass == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("powerup class not set"), *GetName());
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	PowerUpInstance = GetWorld()->SpawnActor<ASPowerupAcotr>(PowerUpClass, GetTransform(), SpawnParams);
}

void ASPickupActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (!HasAuthority()) return;

	ASCharacter* PlayerPawn = Cast<ASCharacter>(OtherActor);
	if (PlayerPawn)
	{

		if (PowerUpInstance)
		{
			PowerUpInstance->ActivatePowerup(OtherActor);

			PowerUpInstance = nullptr;

			GetWorldTimerManager().SetTimer(TimerHandle_RespawnTimer, this, &ASPickupActor::Respawn, CooldownDuration);
		}
	}

}



