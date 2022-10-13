// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paleta.generated.h"

UCLASS()
class LAB_03_API APaleta : public APawn
{
	GENERATED_BODY()

private:
	float pocisionX;
	float pocisionY;
	float pocisionZ;
	float Tamaño;
	float Color;
	float Velociadad;

public:
	// Sets default values for this pawn's properties
	APaleta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Mover();
	void Disparar();
	void Alargarse();
	void encojerse();
	void Morir();
};
