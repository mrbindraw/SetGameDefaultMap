// Fill out your copyright notice in the Description page of Project Settings.


#include "NativeGameInstance.h"

void UNativeGameInstance::Init()
{
	Super::Init();

	UGameMapsSettings::SetGameDefaultMap(TEXT("/Game/Maps/NewMap2.NewMap2"));
}

void UNativeGameInstance::OnStart()
{
	Super::OnStart();

}

void UNativeGameInstance::Shutdown()
{
	Super::Shutdown();

}
