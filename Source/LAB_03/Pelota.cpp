// Fill out your copyright notice in the Description page of Project Settings.


#include "Pelota.h"

// Sets default values
APelota::APelota()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APelota::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APelota::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APelota::Mover()
{
}

void APelota::rebotar()
{
}

void APelota::Morir()
{
}

void APelota::Clonar()
{
}
