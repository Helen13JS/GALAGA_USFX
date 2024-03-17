// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaBeta.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazaBeta : public ANaveEnemigaCaza
{
	GENERATED_BODY()

private:
	int armasInteligentes;

public:
	FORCEINLINE int GetArmasInteligentes() const { return armasInteligentes; }
	FORCEINLINE void SetArmasInteligentes(int _armasInteligentes) { armasInteligentes = _armasInteligentes; }
protected:

	ANaveEnemigaCazaBeta();

	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
	
};
