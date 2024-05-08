// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsulas.h"
#include "CapsulasMunicionRapida.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACapsulasMunicionRapida : public ACapsulas
{
	GENERATED_BODY()

public:
	// Define cuánto se incrementará la velocidad de las municiones
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Municion")
	float VelocidadMunicionIncremento;

	ACapsulasMunicionRapida();
	
};
