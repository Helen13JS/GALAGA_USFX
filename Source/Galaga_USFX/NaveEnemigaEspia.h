// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int campoVision;

public:
	ANaveEnemigaEspia();
	FORCEINLINE int GetCampoVision() const { return campoVision; }
	FORCEINLINE void SetCampoVision(int _campoVision) { campoVision = _campoVision; }

protected:
	
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
public:
	void Tick(float DeltaTime) override;
	
};
