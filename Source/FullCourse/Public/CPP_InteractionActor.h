// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CPP_InteractionActor.generated.h"

UCLASS()
class FULLCOURSE_API ACPP_InteractionActor : public AActor, public IMyInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACPP_InteractionActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Destruct() override;
	UPROPERTY()
	int SomeVariable;
};
