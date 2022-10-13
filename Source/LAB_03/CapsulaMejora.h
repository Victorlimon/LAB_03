// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaMejora.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API ACapsulaMejora : public ACapsula
{
	GENERATED_BODY()
private:
	float AgrandarPelota;
	float Disparar;
public:

	void DuplivarPelota();
	void AgrandarPelota();
	void Arma();

};
