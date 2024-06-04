// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "Bomba.h"
#include "NaveEnemigaEspia.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNotifyDelegate2);
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
	//TSubclassOf<class ABomba> NewProjectileBomba;
	class AFacadeTipoDisparo* DisparoFacade;
protected:
	
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();
public:
	void Tick(float DeltaTime) override;
	void BeginPlay() override;
	
	//UPROPERTY();
	TArray<class ISubscriptorInterface*> NavesSubscriptoras;

	void SubscribirNave(class ISubscriptorInterface* navesubscriptora);
	void DesubscribirNave(class ISubscriptorInterface* navesubscriptora);

	UFUNCTION()
	void NotificarNaves();

public:
	DECLARE_EVENT(ANaveEnemigaEspia, FOnNotification)
	FOnNotification NotificationEvent;
public:
	// Evento que se dispara cuando se debe notificar a las naves enemigas cazas
	
	FOnNotifyDelegate2 evento;


	//void UpdateNave();

	//FOnNotification& OnNotify() override { return NotificationEvent; }
};
