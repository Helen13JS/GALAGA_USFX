// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasEnergiaNegativa.h"

ACapsulasEnergiaNegativa::ACapsulasEnergiaNegativa()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		CylinderMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule_3.Shape_WideCapsule_3'"));

	if (CylinderMeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(CylinderMeshAsset.Object);
	}
}
