// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EscudoPawn.generated.h"

UCLASS()
class GALAGA_USFX_API AEscudoPawn : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = EscudoPawn, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* EscudoPawn;
public:	
	// Sets default values for this actor's properties
	AEscudoPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
