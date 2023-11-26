// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Health.h>
#include <Components/CapsuleComponent.h>
#include "Engine/Engine.h"
#include <Components/ArrowComponent.h>
#include "CPP_ExampleEnemy.generated.h"

UCLASS(BlueprintType)
class FULLCOURSE_API ACPP_ExampleEnemy : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACPP_ExampleEnemy();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Skeletal Mesh")
	USkeletalMeshComponent* SkeletalMeshComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	UCapsuleComponent* CapsuleComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Arrow")
	UArrowComponent* ArrowComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Health")
	UHealth* HealthComponent;

	UFUNCTION(BlueprintCallable)
	void DealDamage(float damage);

	void DestroyThisActor();
	void ColliderTrigger(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
