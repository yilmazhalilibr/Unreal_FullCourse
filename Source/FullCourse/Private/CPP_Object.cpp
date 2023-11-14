// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Object.h"

int UCPP_Object::GetOurPrivateInteger()
{
	return _ourPrivateIntegerVariable;
}

void UCPP_Object::SetOurPrivateInteger(UPARAM(ref) int& newValue)
{
	_ourPrivateIntegerVariable = newValue;
}

void UCPP_Object::Test(UPARAM(ref)FBook& Target)
{
	printf("Test Function called");
}



