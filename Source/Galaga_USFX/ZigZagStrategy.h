// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StrategyInterface.h"
#include "StrategyPawnInterface.h"
#include "ZigZagStrategy.generated.h"
UCLASS()
class GALAGA_USFX_API AZigZagStrategy : public AActor, public IStrategyInterface, public IStrategyPawnInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZigZagStrategy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected: 
	//void ExecuteMovement(class ANameEnemiga*enemy,float DeltaTime) override;
	virtual void Movement(class ANaveEnemiga* enemy) override;
	virtual void ExecuteMovementPawn(class AGalaga_USFXPawn* Pawn) override;

private:
	float Speed;
	float ZigZagTime;
	float ZigZagInterval;
	FVector CurrentDirection;
	float limit;

};
