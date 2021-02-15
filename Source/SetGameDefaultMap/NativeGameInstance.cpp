// Fill out your copyright notice in the Description page of Project Settings.


#include "NativeGameInstance.h"

//DEFINE_LOG_CATEGORY(LogGameInstance);
DEFINE_LOG_CATEGORY_STATIC(LogGameInstance, Log, All);

void UNativeGameInstance::Init()
{
	Super::Init();

#if PLATFORM_WINDOWS
	UE_LOG(LogGameInstance, Log, TEXT(__FUNCTION__));
#endif

	UGameMapsSettings::SetGameDefaultMap(TEXT("/Game/Maps/NewMap2.NewMap2"));
}

void UNativeGameInstance::OnStart()
{
	Super::OnStart();

	if (GEngine)
	{
		GEngine->SetMaxFPS(120.0f);
	}

#if PLATFORM_WINDOWS
	UE_LOG(LogGameInstance, Log, TEXT(__FUNCTION__));
#endif
}

void UNativeGameInstance::Shutdown()
{
	Super::Shutdown();

#if PLATFORM_WINDOWS
	UE_LOG(LogGameInstance, Log, TEXT(__FUNCTION__));
#endif
}
