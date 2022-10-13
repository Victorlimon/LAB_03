// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pelota.generated.h"

UCLASS()
class LAB_03_API APelota : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APelota();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float Tamaño;
	float posicionX;
	float posicionY;
	float posicionZ;
	float Color;
	float Velocidad;
	float Daño;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Mover();
	void rebotar();
	void Morir();
	void Clonar();
};
