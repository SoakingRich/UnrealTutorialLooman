// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerupAcotr.h"
#include <Net/UnrealNetwork.h>

// Sets default values
ASPowerupAcotr::ASPowerupAcotr()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PowerupInterval = 0.0f;
	TotalNumOfTicks = 0;

	SetReplicates(true);
}



void ASPowerupAcotr::OnTickPowerup()
{
	if (!HasAuthority()) return;

	TicksProcessed++;

	OnPowerupTicked();

	if (TotalNumOfTicks >= TicksProcessed)
	{
		OnExpired();

		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}
}

void ASPowerupAcotr::OnRep_PowerupActive()
{
	//set the new value
		OnPowerupStateChanged(bPowerUpActive);
	
}

void ASPowerupAcotr::ActivatePowerup(AActor* ActivateFor)
{
	if (!HasAuthority()) return;


	OnActivated(ActivateFor);
	bPowerUpActive = true;
	OnRep_PowerupActive();

	if (PowerupInterval > 0.0f)
	{
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ASPowerupAcotr::OnTickPowerup,PowerupInterval, true);
	

	}
	else
	{
		OnTickPowerup();
		

	}

}

void ASPowerupAcotr::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASPowerupAcotr, bPowerUpActive);
}




