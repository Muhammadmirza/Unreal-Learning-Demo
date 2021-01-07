// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    SetupGame(); 

    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); // Debug Line, comment out in final product
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else // Checking PlayerGuess
    {
       ProcessGuess(Input);
    }
}

void UBullCowCartridge::SetupGame()
{
     // Player Introduction
    PrintLine(TEXT("Welcome to Bull Cows!")); // intro message to welcome player

    HiddenWord = TEXT("love"); // assigns our HiddenWord
    Lives = HiddenWord.Len();
    bGameOver = false;

    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); 
    PrintLine(TEXT("You have %i lives"), Lives);
    PrintLine(TEXT("Type and enter your answer...")); 
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play game again."));
}

void UBullCowCartridge::ProcessGuess(FString Guess)
{
     if (Guess == HiddenWord) // Checks if the player input matches the hiddenword
    {
        PrintLine(TEXT("You win!")); // Prints winning message
        EndGame();
    }
    else 
    {
        PrintLine(TEXT("You lost a life!")); 
        --Lives;
        if (Lives > 0)
        {
            if (Guess.Len() != HiddenWord.Len()) 
             {
                PrintLine(TEXT("Sorry try again, you have %i lives left."), Lives); 
         }
       }
            else
             {
             PrintLine(TEXT("You have no lives left, loser :(")); 
            EndGame();
              }
         }
}

bool UBullCowCartridge::IsIsogram(FString Word)
{
    return true;
} 