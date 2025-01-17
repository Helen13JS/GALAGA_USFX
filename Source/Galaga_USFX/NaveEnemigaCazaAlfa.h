// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaAlfa.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCazaAlfa : public ANaveEnemigaCaza
{
	GENERATED_BODY()

private:
	int cantidadlaser;

	class AFacadeTipoDisparo* FacadeDisparo;
public:

	ANaveEnemigaCazaAlfa();

	FORCEINLINE int GetCantidadlaser() const { return cantidadlaser; }
	FORCEINLINE void SetCantidadlaser(int _cantidadlaser) { cantidadlaser = _cantidadlaser; }

protected:
	
	virtual void Tick(float DeltaTime);
	virtual void BeginPlay();
	void Mover(float DeltaTime) override  ;
	void Disparar() override;
	void Destruirse() override;
	void Escapar() override;
	
};
