// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NativeGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SETGAMEDEFAULTMAP_API UNativeGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;

	virtual void OnStart() override;

	virtual void Shutdown() override;
};
