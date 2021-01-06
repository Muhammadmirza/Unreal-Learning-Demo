// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame(); // Setting up the game

    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); // Debug Line, remove in final product
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
        if (Input == HiddenWord) // Checks if the player input matches the hiddenword
        {
        PrintLine(TEXT("You win!")); // Prints winning message
        EndGame();
        }
    else 
    {
        --Lives;
        PrintLine(TEXT("You lost a life!")); 
        PrintLine(TEXT("%i"), --Lives);
        if (Lives > 0)
        {
            if (Input.Len() != HiddenWord.Len()) 
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
    // Check if its an isogram here
    // Prompt to guess again

    // Remove Life Here

    // Check if Lives > 0 here
    // If Yes setup code to play the game again
    // Show lives left
    // If No setup code to show game over
    // Prompt to play again
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