// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ladrillo.h"
#include "LadrilloMetalico.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API ALadrilloMetalico : public ALadrillo
{
	GENERATED_BODY()
	
protected:
	float tipoMetal;
	float Peso;

public:
	void Caer();
	void InfluirDa�o();
};
