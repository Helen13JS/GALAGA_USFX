// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasVelocidad.h"

ACapsulasVelocidad::ACapsulasVelocidad()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		CylinderMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule_2.Shape_NarrowCapsule_2'"));
	if (CylinderMeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(CylinderMeshAsset.Object);
	}


}

