// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsuleDirector.h"
#include "CapMunicionBuilder.h"
#include "CapEnergiaBuilder.h"

// Sets default values
ACapsuleDirector::ACapsuleDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapsuleDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsuleDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AAuxCapsulas* ACapsuleDirector::ConstruirCapsula(ICapsulasInterface* Builder)
{
	if (Builder)
	{
		Builder->AgregarEnergia();
		Builder->AgregarMunicion();
		Builder->AgregarSalud();

		return Builder->GetCapsula();
	}
	else
	{
		// Manejar el caso de que el constructor sea nulo (error)
		return nullptr;
	}
}

