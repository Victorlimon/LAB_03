// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pelota.h"
#include "PelotaPlastoformo.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API APelotaPlastoformo : public APelota
{
	GENERATED_BODY()
private:

	float materialPlastofor;

public:
	void CambiarDireccion();
	void ReducirDaño();
	void ReducirVel();

};
