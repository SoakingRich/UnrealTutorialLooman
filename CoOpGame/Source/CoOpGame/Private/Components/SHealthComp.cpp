// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SHealthComp.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
USHealthComp::USHealthComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	
	DefaultHealth = 100;

	SetIsReplicatedByDefault(true);
	// ...
}


// Called when the game starts
void USHealthComp::BeginPlay()
{
	Super::BeginPlay();

	// ...

	if (GetOwner()->HasAuthority())
	{

		AActor* myOwner = GetOwner();
		if (myOwner)
		{
			myOwner->OnTakeAnyDamage.AddDynamic(this, &USHealthComp::HandleTakeAnyDamage);
		}

	}
		Health = DefaultHealth;
}

void USHealthComp::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.0f)
	{
		return;
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));

	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);
}

void USHealthComp::OnRep_Health(float OldHealth)
{
	float Damage = Health - OldHealth;

	OnHealthChanged.Broadcast(this, Health, Damage, nullptr, nullptr, nullptr);
}

void USHealthComp::Heal(float HealAmount)
{
	if (HealAmount <= 0.0f || Health <= 0) return;
	
	Health = FMath::Clamp(Health + HealAmount, 0.0f, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s (+%s)"), *FString::SanitizeFloat(HealAmount));

	OnHealthChanged.Broadcast(this, Health, -HealAmount, nullptr, nullptr, nullptr);

}

void USHealthComp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USHealthComp, Health);
}

