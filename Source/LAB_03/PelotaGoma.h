// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pelota.h"
#include "PelotaGoma.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API APelotaGoma : public APelota
{
	GENERATED_BODY()
private:
	float materialGoma;

public:
	void AumentarVel();
	void ReducirDaño();
};
