// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ladrillo.h"
#include "LadrilloAlienigena.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API ALadrilloAlienigena : public ALadrillo
{
	GENERATED_BODY()
	
private:
	
	float tipoMovientos;
	float Invisibilidad;
	float velDesplazamiento;

public:
	void Mover();
	void VerLadrillo();

};
