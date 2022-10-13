// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LadrilloMetalico.h"
#include "LadrilloBionico.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API ALadrilloBionico : public ALadrilloMetalico
{
	GENERATED_BODY()

private:

	float tipoMovimiento;
	float numArticulaciones;

public:
	void Mover();
	void MoverArti();
};
