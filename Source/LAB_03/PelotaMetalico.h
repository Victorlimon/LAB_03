// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pelota.h"
#include "PelotaMetalico.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API APelotaMetalico : public APelota
{
	GENERATED_BODY()
private:

	float tipoMetal;
	float Peso;

public:
	void AumenDaño();
	void AumenVelCaer();
};
