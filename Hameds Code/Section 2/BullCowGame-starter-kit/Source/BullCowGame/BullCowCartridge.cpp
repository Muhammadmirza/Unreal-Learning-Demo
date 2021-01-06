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
    if (bGameOver == true)
    {
        ClearScreen();
        SetupGame();
    }
    else
    {
        if (Input == HiddenWord) // Checks if the player input matches the hiddenword
     {
        PrintLine(TEXT("You guessed the hidden word, congrats!")); // Prints winning message
        EndGame();
    }
    else 
    {
        if (Input.Len() != HiddenWord.Len()) // Checks if player's inputted word is the same length as the length of our hidden word
        {
            PrintLine(TEXT("The hidden word is %i letters long! \nYou have lost :("), HiddenWord.Len()); // magic number
            EndGame();
        }
     }
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

     // Player Introduction
    PrintLine(TEXT("Welcome to Bull Cows!")); // intro message to welcome player

    HiddenWord = TEXT("love"); // assigns our HiddenWord
    Lives = 10 ;
    bGameOver = false;

    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); // magic number
    PrintLine(TEXT("Type and enter your answer...")); // intro message to guide the player how to actually start the basic game loop

    
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play game again."));
}