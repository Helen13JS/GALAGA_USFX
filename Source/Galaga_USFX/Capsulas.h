// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
//#include "GameFramework/Actor.h"
#include "MovimientoVertical.h"
#include "Capsulas.generated.h"


UCLASS()
class GALAGA_USFX_API ACapsulas : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsulas();

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void PickUp() ; //Función para recoger el objeto
	virtual void PutDown(FTransform TargetLocation) ; //Función para dejar el objeto
	virtual void CustomizeAppearance();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Componente de movimiento vertical
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movimiento")
	UMovimientoVertical* MovementComponent;

};
