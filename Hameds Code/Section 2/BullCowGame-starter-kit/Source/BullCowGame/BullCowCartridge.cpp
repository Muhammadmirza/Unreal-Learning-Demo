// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include "HiddenWordList.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    Isograms = GetValidWords(Words);

    SetupGame(); 

    // PrintLine(TEXT("The number of possible words is %i"), Words.Num());
    // PrintLine(TEXT("The number of valid words is %i."), GetValidWords(Words).Num());
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

    HiddenWord = Isograms[FMath::RandRange(0, Isograms.Num() - 1)]; // assigns our HiddenWord
    Lives = HiddenWord.Len() * 2;
    bGameOver = false;

    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); 
    // PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); // Debug Line, comment out in final product
    PrintLine(TEXT("You have %i lives"), Lives);
    PrintLine(TEXT("\nType and enter your answer...")); 
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play game again."));
}

void UBullCowCartridge::ProcessGuess(const FString& Guess)
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
    int32 Bulls, Cows;
    GetBullCows(Guess, Bulls, Cows);

    PrintLine(TEXT("You have %i Bulls and %i Cows"), Bulls, Cows);
    PrintLine(TEXT("Guess again you have %i lives left!"), Lives);
}

bool UBullCowCartridge::IsIsogram(const FString& Word) const
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

TArray<FString> UBullCowCartridge::GetValidWords(const TArray<FString>& WordList) const
{
    TArray<FString> ValidWords;

    for (FString Word : WordList)
    {
        if (Word.Len() >= 4 && Word.Len() <= 8 && IsIsogram(Word))
        {
            ValidWords.Emplace(Word);
        }
    }
        return ValidWords;
}

void UBullCowCartridge::GetBullCows(const FString& Guess, int32& BullCount, int32& CowCount) const
{
    BullCount = 0;
    CowCount = 0;

    for (int32 GuessIndex = 0; GuessIndex < Guess.Len(); GuessIndex++)
    {
       if (Guess[GuessIndex] == HiddenWord[GuessIndex])
       {
           BullCount++;
           continue;
       }
       
       for (int32 HiddenIndex = 0; HiddenIndex < HiddenWord.Len(); HiddenIndex++)
       {
           if (Guess[GuessIndex] == HiddenWord[HiddenIndex])
           {
             CowCount++;
             break;
           }
       }
    }
}