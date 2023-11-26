// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Health.h>
#include <Components/CapsuleComponent.h>
#include <Components/ArrowComponent.h>
#include "CPP_ExampleEnemyCharacter.generated.h"

UCLASS()
class FULLCOURSE_API ACPP_ExampleEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_ExampleEnemyCharacter();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	UHealth* HealthComponent;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void DealDamage(float damage);

	void DestroyThisActor();

};
