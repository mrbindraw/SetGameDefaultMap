// Fill out your copyright notice in the Description page of Project Settings.


#include "NativeGameInstance.h"

void UNativeGameInstance::Init()
{
	Super::Init();

#if PLATFORM_WINDOWS
	UE_LOG(LogTemp, Log, TEXT(__FUNCTION__));
#endif

	UGameMapsSettings::SetGameDefaultMap(TEXT("/Game/Maps/NewMap2.NewMap2"));
}

void UNativeGameInstance::OnStart()
{
	Super::OnStart();

#if PLATFORM_WINDOWS
	UE_LOG(LogTemp, Log, TEXT(__FUNCTION__));
#endif
}

void UNativeGameInstance::Shutdown()
{
	Super::Shutdown();

#if PLATFORM_WINDOWS
	UE_LOG(LogTemp, Log, TEXT(__FUNCTION__));
#endif
}
