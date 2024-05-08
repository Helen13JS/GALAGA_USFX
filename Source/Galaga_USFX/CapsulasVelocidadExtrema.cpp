// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasVelocidadExtrema.h"

ACapsulasVelocidadExtrema::ACapsulasVelocidadExtrema()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		CylinderMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule_3.Shape_NarrowCapsule_3'"));
	if (CylinderMeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(CylinderMeshAsset.Object);
	}
}

