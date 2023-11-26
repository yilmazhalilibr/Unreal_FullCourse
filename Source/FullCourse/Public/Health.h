// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Health.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeathDelegate);
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class FULLCOURSE_API UHealth : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealth();
	FDeathDelegate OnDead;

	UPROPERTY(Category = "Health", EditAnywhere)
	float Health;

	void IncreasesHealth(float health);
	void DowngradesHealth(float health);

	UFUNCTION(BlueprintCallable)
	float GetHealth();
	UFUNCTION(BlueprintCallable)
	void SetHealth(float newHealth);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
