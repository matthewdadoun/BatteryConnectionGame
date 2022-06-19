// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleScreenWidget.h"

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Kismet/GameplayStatics.h"

void UTitleScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	StartButton->OnClicked.AddUniqueDynamic(this, &ThisClass::StartGame);
	BackButton->OnClicked.AddUniqueDynamic(this, &ThisClass::OnBackButtonClicked); 
	StoryButton->OnClicked.AddUniqueDynamic(this, &ThisClass::ShowStory); 
	ControlsButton->OnClicked.AddUniqueDynamic(this, &ThisClass::ShowControls); 
	ExitButton->OnClicked.AddUniqueDynamic(this, &ThisClass::ExitGame); 
	BackButton->SetVisibility(ESlateVisibility::Collapsed);
}

void UTitleScreenWidget::StartGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("FinalRoom"), true);
}

void UTitleScreenWidget::OnBackButtonClicked()
{
	BackButton->SetVisibility(ESlateVisibility::Collapsed);
	WidgetSwitcher->SetActiveWidgetIndex(0); 
}

void UTitleScreenWidget::ShowStory()
{
	BackButton->SetVisibility(ESlateVisibility::Visible);
	WidgetSwitcher->SetActiveWidgetIndex(1); 
}

void UTitleScreenWidget::ShowControls()
{
	BackButton->SetVisibility(ESlateVisibility::Visible);
	WidgetSwitcher->SetActiveWidgetIndex(2); 
}

void UTitleScreenWidget::ExitGame()
{
	UKismetSystemLibrary::QuitGame(this, 0, EQuitPreference::Quit, true);
}
