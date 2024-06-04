// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StrategyInterface.h"
#include "CircularStrategy.generated.h"

UCLASS()
class GALAGA_USFX_API ACircularStrategy : public AActor, public IStrategyInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACircularStrategy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	protected:
		virtual void Movement(class ANaveEnemiga* enemy) override;

};
