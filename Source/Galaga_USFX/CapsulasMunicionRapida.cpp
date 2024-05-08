// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulasMunicionRapida.h"

ACapsulasMunicionRapida::ACapsulasMunicionRapida()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube_3.Shape_Tube_3'"));

	if (CylinderMeshAsset.Succeeded())
	{
		GetStaticMeshComponent()->SetStaticMesh(CylinderMeshAsset.Object);
	}
		//VelocidadMunicionIncremento = 1000.0f;
}
