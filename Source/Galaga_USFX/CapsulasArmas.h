// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsulas.h"
#include "CapsulasArmas.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACapsulasArmas : public ACapsulas
{
	GENERATED_BODY()

public:
	ACapsulasArmas();
	
	virtual void CustomizeAppearance();
	
};
