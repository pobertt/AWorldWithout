// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
//File Picker Includes
#include "Developer/DesktopPlatform/Public/IDesktopPlatform.h"
#include "Developer/DesktopPlatform/Public/DesktopPlatformModule.h"
#include "FilePicker.generated.h"

/**
 * 
 */
UCLASS()
class AWORLDWITHOUT_API AFilePicker : public AInfo
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "FilePicker")
	void OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);

	UFUNCTION(BlueprintCallable, Category = "FilePicker")
	void PrintData(const FString& File);

	UFUNCTION(BlueprintCallable, Category = "FilePicker")
	static void WriteStringToFile(FString FilePath, FString String);
};
