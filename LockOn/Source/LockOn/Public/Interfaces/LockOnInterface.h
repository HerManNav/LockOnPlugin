// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LockOnInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class ULockOnInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class LOCKON_API ILockOnInterface
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "LockOnPlugin|Interfaces")
	void SetLockOnWidgetVisibility(bool bVisibility);

};
