// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Player Introduction
    PrintLine(TEXT("Welcome to Bull Cows!")); // intro message to welcome player
    PrintLine(TEXT("Guess the 4 letter word!")); // magic number
    PrintLine(TEXT("Press enter to continue...")); // intro message to guide the player how to actually start the basic game loop
    
    SetupGame(); // Setting up the game
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen(); // clears the player input to make our game easier to read/clean

    //Checking the Player Guess

    if (Input == HiddenWord)
     {
        PrintLine(TEXT("You guessed the hidden word, congrats!"));
    }
    else 
    {
        if (Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The hidden word is 4 letters long, try again!")); // magic number
        }
        
        PrintLine(TEXT("You are incorrect, try again!"));
    }
    // Check if its an isogram here
    // Check if the right number of character are entered
    // Prompt to guess again

    // Remove Life Here

    // Check if Lives > 0 here
    // If Yes setup code to play the game again
    // Show lives left
    // If No setup code to show game over
    // Prompt to play again
}
// The To Do List for this section

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("love"); // assigns our HiddenWord

    // Set Lives
    Lives = 10 ;
}