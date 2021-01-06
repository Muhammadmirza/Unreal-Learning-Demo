// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bull Cows!")); // intro message to welcome player
    PrintLine(TEXT("Guess the 4 letter word!")); // intro message in introduce how many letters make up the word, will be removed later!
    PrintLine(TEXT("Press enter to continue...")); // intro message to guide the player how to actually start the basic game loop
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen(); // clears the player input to make our game easier to read/clean
    FString HiddenWord = TEXT("love"); // assignment of our isogram that the player has to guess (Remember to move outside this function!)
    if (Input == HiddenWord)
     {
        PrintLine(TEXT("You guessed the hidden word, congrats!"));
    }
    else {
        PrintLine(TEXT("You are incorrect, try again!"));
    }

}
// The To Do List for this section

// Print a welcome message that welcomes the player and instructs them how to play our game
// Set up a  HiddenWord for the player to guess, HiddenWord should be an isogram
// Check if User's Input matches HiddenWord
// Check if HiddenWord is an Isogram
// Set up a life system for the player to start with
// Remove Life if guess is wrong
// Display to the user how many lives they current have
// Setup display messages to tell the user that for various possible reasons that there answer is stupid and to tell them to try again
// Check If Lives are > 0
// Setup Game Over and Game Win messages to match the appropriate conditions
// Prompt user to play again 
// Check User's response
// Set the game up for replayability and cycle through the above commands again, or quit the user from the game
// Eventually add a pool of HiddenWords that gets randomly selected from each round
// Eventually add a way of checking each letter of the user's inputted word to see how many cows and bulls it has
// Letters in guess and in the right places are COWS
// Letters in guess but in the wrong places are BULLS
// Let the user know how many bulls and cows the word they submitted produced to provide them with clues to figure out the real answer
// For debugging purposes, display the HiddenWord in the in game terminal but remember to remove it in the final product
// 