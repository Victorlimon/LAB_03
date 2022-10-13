// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class LAB_03_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsula();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float PosicionX;
	float PosicionY;
	float PosicionZ;
	float Color;
	float velCaida;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Crear();
	void Caer();
};
