// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CapsulasInterface.h"
#include "CapsulasVelocidad.h"
#include "CapSaludBuilder.generated.h"

UCLASS()
class GALAGA_USFX_API ACapSaludBuilder : public AActor, public ICapsulasInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapSaludBuilder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTimerHandle TimerHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	AAuxCapsulas* Capsula;

public:
	void AgregarEnergia() override;
	void AgregarMunicion() override;
	void AgregarSalud() override;
	virtual AAuxCapsulas* GetCapsula() override;

	TMap <FVector, AActor*> TMCapsulas;

};
