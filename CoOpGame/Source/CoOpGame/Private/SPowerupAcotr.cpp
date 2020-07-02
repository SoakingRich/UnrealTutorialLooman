// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerupAcotr.h"

// Sets default values
ASPowerupAcotr::ASPowerupAcotr()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PowerupInterval = 0.0f;
	TotalNumOfTicks = 0;

}

// Called when the game starts or when spawned
void ASPowerupAcotr::BeginPlay()
{
	Super::BeginPlay();
	
	

}

void ASPowerupAcotr::OnTickPowerup()
{
	TicksProcessed++;

	OnPowerupTicked();

	if (TotalNumOfTicks >= TicksProcessed)
	{
		OnExpired();

		GetWorldTimerManager().ClearTimer(TimerHandle_PowerupTick);
	}
}

void ASPowerupAcotr::ActivatePowerup()
{
	if (PowerupInterval > 0.0f)
	{
		//GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, &ASPowerupAcotr::OnTickPowerup, PowerupInterval, true, 0.0f);
		GetWorldTimerManager().SetTimer(TimerHandle_PowerupTick, this, &ASPowerupAcotr::OnTickPowerup, PowerupInterval, true, 0.0f);
	}
	else
	{
		OnTickPowerup();
	}
}

