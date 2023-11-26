// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_ExampleEnemyCharacter.h"

// Sets default values
ACPP_ExampleEnemyCharacter::ACPP_ExampleEnemyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	HealthComponent = CreateDefaultSubobject<UHealth>(TEXT("Health"));

}

// Called when the game starts or when spawned
void ACPP_ExampleEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACPP_ExampleEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_ExampleEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


}

void ACPP_ExampleEnemyCharacter::DealDamage(float damage)
{
	HealthComponent->DowngradesHealth(damage);
}

void ACPP_ExampleEnemyCharacter::DestroyThisActor()
{
	ACPP_ExampleEnemyCharacter::Destroy();
}


