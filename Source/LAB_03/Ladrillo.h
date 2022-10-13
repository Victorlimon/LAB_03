// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class LAB_03_API ALadrillo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALadrillo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float PosicionX;
	float Posiciony;
	float Posicionz;
	float Tamaño;
	float tipoMaterial;
	float color;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void Crear();
	void Clonar();
	void Desaparecer();
};
