// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaDanio.generated.h"

/**
 * 
 */
UCLASS()
class LAB_03_API ACapsulaDanio : public ACapsula
{
	GENERATED_BODY()
private:

	float Daño;

public:

	void AumentarDanio();

};
