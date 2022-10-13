// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LadrilloMetalico.h"
#include "LadrilloRobotico.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API ALadrilloRobotico : public ALadrilloMetalico
{
	GENERATED_BODY()
	
private:

	float Sensores;
	float Habilidad;

public:
	void Mover();
	void SetntirPelo();
	void Defenderse();
};
