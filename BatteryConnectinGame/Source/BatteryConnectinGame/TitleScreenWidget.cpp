// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleScreenWidget.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UTitleScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	StartButton->OnClicked.AddUniqueDynamic(this, &ThisClass::StartGame);
	StoryButton->OnClicked.AddUniqueDynamic(this, &ThisClass::ShowStory); 
	ControlsButton->OnClicked.AddUniqueDynamic(this, &ThisClass::ShowControls); 
	ExitButton->OnClicked.AddUniqueDynamic(this, &ThisClass::ExitGame); 
	BackButton->SetVisibility(ESlateVisibility::Collapsed);
}

void UTitleScreenWidget::StartGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("FinalRoom"), true);
}

void UTitleScreenWidget::ShowStory()
{
}

void UTitleScreenWidget::ShowControls()
{
}

void UTitleScreenWidget::ExitGame()
{
	UKismetSystemLibrary::QuitGame(this, 0, EQuitPreference::Quit, true);
}
