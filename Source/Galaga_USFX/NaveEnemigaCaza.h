// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.h"
#include "SubscriptorInterface.h"
#include "NaveEnemigaCaza.generated.h"
/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ANaveEnemigaCaza : public ANaveEnemiga, public ISubscriptorInterface
{
	GENERATED_BODY()

private:
	int cantidadBombas;
	//int LimiteInferiorX;
	class AFacadeTipoDisparo* FacadeDisparo;
	//float TiempoCambio;

public:
	ANaveEnemigaCaza();
	//~ANaveEnemigaCaza();
	class ANaveEnemigaEspia* Espia;
	class ANaveEnemigaCaza *Caza;
	//class AShipFactory* ShipFactory;
	void SpawnNaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	

protected:
	virtual void Mover(float DeltaTime) ;
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();


public:

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	//void FuncionColision(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	//int DireccionMovimientoHorizontal;

   
	FTimerHandle TimerHandleDisparo_ShotTimerExpired;
	//float FireRate;
	int a;
	//int TiempoTranscurrido;
	//bool bCanFire;

	


	void ShotTimerExpired();
	FORCEINLINE float GetFireRate() const { return FireRate; }
	FORCEINLINE void SetFireRate(float _FireRate) { FireRate = _FireRate; }

	UFUNCTION()
	void OnNotify() override;
public:
	
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNotifyDelegate);

};
