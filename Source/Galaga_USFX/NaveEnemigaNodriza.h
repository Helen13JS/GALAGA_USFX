// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()

private:
	int nivelSpawn;
public:
	FORCEINLINE int GetNivelSpawn() const { return nivelSpawn; }
	FORCEINLINE void SetNivelSpawn(int _nivelSpawn) { nivelSpawn = _nivelSpawn; }

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
public:
	ANaveEnemigaNodriza();
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

	class AFacadeTipoDisparo* Disparo;
	
};
