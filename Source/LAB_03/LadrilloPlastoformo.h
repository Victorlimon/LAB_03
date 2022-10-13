// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ladrillo.h"
#include "LadrilloPlastoformo.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API ALadrilloPlastoformo : public ALadrillo
{
	GENERATED_BODY()
private:
	float tipoPlastoformo;
	float rebajarVelPelota;

public:
	void RenajarVelPelo();
	void CambiarDireccionPelo();
};
