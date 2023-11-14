// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_InteractionActor.h"

// Sets default values
ACPP_InteractionActor::ACPP_InteractionActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_InteractionActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACPP_InteractionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACPP_InteractionActor::Destruct()
{
	UKismetSystemLibrary::PrintString(this, "Destroyed a interaction actor from CPP");
	Destroy();
}

