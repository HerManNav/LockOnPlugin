// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "LockOnWidgetComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = "Custom", meta = (BlueprintSpawnableComponent) )
class LOCKON_API ULockOnWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "LockOnPlugin|Widgets")
	void UpdateLockOnWidget();

};
