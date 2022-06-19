// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TitleScreenWidget.generated.h"

/**
 * 
 */

class UImage;
class UButton;
class UWidgetSwitcher; 
UCLASS()
class BATTERYCONNECTINGAME_API UTitleScreenWidget : public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
protected:

private:
	
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget = "true", AllowPrivateAccess = "true"))
	UImage* TitleLogo;

	UPROPERTY(EditDefaultsOnly, meta = (BindWidget = "true", AllowPrivateAccess = "true"))
	UButton* StartButton;

	UPROPERTY(EditDefaultsOnly, meta = (BindWidget = "true", AllowPrivateAccess = "true"))
	UButton* BackButton;
	
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget = "true", AllowPrivateAccess = "true"))
	UButton* StoryButton;

	UPROPERTY(EditDefaultsOnly, meta = (BindWidget = "true", AllowPrivateAccess = "true"))
	UButton* ControlsButton;
	
	UPROPERTY(EditDefaultsOnly, meta = (BindWidget = "true", AllowPrivateAccess = "true"))
	UButton* ExitButton;

	UPROPERTY(EditDefaultsOnly, meta = (BindWidget = "true", AllowPrivateAccess = "true"))
	UWidgetSwitcher* WidgetSwitcher;
	
private:

	UFUNCTION()
	void StartGame();

	UFUNCTION()
	void ShowStory();

	UFUNCTION()
	void ShowControls();

	UFUNCTION()
	void OnBackButtonClicked();

	UFUNCTION()
	void ExitGame(); 
};
