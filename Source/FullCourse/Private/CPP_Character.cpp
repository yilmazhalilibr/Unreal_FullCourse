// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Character.h"
#include <MyInterface.h>

// Sets default values
ACPP_Character::ACPP_Character()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	OurIntArray = { 12,144,255,342,53,2 };

}

// Called when the game starts or when spawned
void ACPP_Character::BeginPlay()
{
	Super::BeginPlay();
	//TestBPFunc(100);
	OurIntArray.Reserve(8);
	OurIntArray.Add(24);
	OurIntArray.Emplace(4);
	OurIntArray.Remove(342);
	OurIntArray.RemoveAt(0);


	OurMap.Add("Pi", 3.14);
	OurMap.Add("Num1", 42.525);

	UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(OurMap["Num1"]));


	//for (int i = 0; i < OurIntArray.Num(); ++i)
	//{
	//	UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(OurIntArray[i]));
	//}

	for (auto& ele : OurMap)
	{
		FString temp = ele.Key;
		temp.Append(" : ");
		temp.Append(FString::SanitizeFloat(ele.Value));
		UKismetSystemLibrary::PrintString(this, temp);
	}


}

// Called every frame
void ACPP_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//void ACPP_Character::RemovePickUp()
//{
//	auto temp = UGameplayStatics::GetPlayerCameraManager(this, 0);
//	auto cameraLocation = temp->GetCameraLocation();
//	auto end = temp->GetCameraLocation() + (temp->GetActorForwardVector() * 50000);
//	TArray<AActor*> Ignore;
//	FHitResult Hit;
//	UKismetSystemLibrary::LineTraceSingle(this, cameraLocation, end, ETraceTypeQuery::TraceTypeQuery1, 0, Ignore, EDrawDebugTrace::ForDuration, Hit, true);
//	if (Hit.GetActor())
//	{
//		if (Cast<IMyInterface>(Hit.GetActor()))
//		{
//			auto tempActor = Cast<IMyInterface>(Hit.GetActor());
//			tempActor->Destruct();
//		}
//	}
//
//}

//void ACPP_Character::TestBPNativeFunc_Implementation(float x)
//{
//	UKismetSystemLibrary::PrintString(this, "C++ implementation called");
//}


