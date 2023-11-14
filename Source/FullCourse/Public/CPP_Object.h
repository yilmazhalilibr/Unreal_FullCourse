// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CPP_Object.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FBook
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int NumberOfPages;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Rating;

};
UCLASS(Blueprintable)
class FULLCOURSE_API UCPP_Object : public UObject
{
	GENERATED_BODY()
private:
	int _ourPrivateIntegerVariable;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int OurPublicIntegerVariable;
	UFUNCTION(BlueprintPure)
	int GetOurPrivateInteger();
	UFUNCTION(BlueprintCallable)
	void SetOurPrivateInteger(UPARAM(ref)int& newValue);
	UFUNCTION(BlueprintCallable)
	static void Test(UPARAM(ref)FBook& Target, UObject* Context);
};
