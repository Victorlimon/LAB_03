// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ladrillo.h"
#include "LadrilloCeramico.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API ALadrilloCeramico : public ALadrillo
{
	GENERATED_BODY()
private:
	float tipoCeramica;
	float resistencia;

public:

	void Dureza();
	void Rebote();
};
