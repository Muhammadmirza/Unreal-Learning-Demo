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
    PrintLine(TEXT("\nType and enter your answer...")); 

    
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
        return;
    }

    // Check if Isogram
    if (!IsIsogram(Guess))
    {
        PrintLine(TEXT("You idiot that is NOT AN ISOGRAM!"));
        return;
    }

    // Check Right Number of Characters
     if (Guess.Len() != HiddenWord.Len()) 
    {
        PrintLine(TEXT("You idiot, its %i letters long"), HiddenWord.Len());
        PrintLine(TEXT("Try again, you have %i lives left."), Lives); 
        return;
     }

     // Remove Life
      PrintLine(TEXT("You lost a life!")); 
      --Lives;

      // Check if Lives > 0
     if (Lives <= 0)
    { 
        ClearScreen();
        PrintLine(TEXT("You have no lives left, loser :("));
        PrintLine(TEXT("The hidden word was: %s"), *HiddenWord);
        EndGame();
        return;
    }
    // Shows the player Bulls and Cows
    PrintLine(TEXT("Guess again you have %i lives left!"), Lives);
}

bool UBullCowCartridge::IsIsogram(FString Word) const
{
    for (int32 Index = 0; Index < Word.Len(); Index++)
         { for (int32 Comparison = Index + 1; Comparison < Word.Len(); Comparison++)
            {
                if (Word[Index] == Word[Comparison])
                {
                     return false;
                }
            }
        }
    return true;
} 