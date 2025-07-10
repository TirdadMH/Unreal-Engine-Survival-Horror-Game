// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_ObjectiveData.generated.h"

USTRUCT(BlueprintType)
struct SURVIVALHORRORGAME_API FS_ObjectiveData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName IDName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ObjectiveTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ObjectiveCompleted;
	FS_ObjectiveData();
	~FS_ObjectiveData();
};
