// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PickupAsset.generated.h"

/**
 * 
 */
UCLASS()
class GD_2D_PRJ1_API UPickupAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "itemName");
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Quantity");
	int Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Icon");
	class UPaperSprite* Icon;

	void UPickAsset();
};
