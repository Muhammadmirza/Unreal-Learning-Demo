#include <iostream> // includes/allows the use of input ouput stream commands
#include <ctime> // includes/allows for the use of time related commands


/** This function prints the intro message of the game to the player, the parameter is accepted because it declares and passes a value into our function
 * This function does not return any type of values */
void PrintIntroduction (int Difficulty)
{
  std::cout << "\n\nWelcome to the trial of the sacred doors, this is trial number " << Difficulty;
  std::cout << "\nEnter the mystical code to unlock the door and move on to the next trial.\n";
}

// Stores the game's code which determines whether the player's results are true or false, the parameter passes the int Difficulty argument into this function
bool PlayGame (int Difficulty) 
{
  PrintIntroduction (Difficulty); // Calls upon our PrintIntroduction function in our PlayGame function and passes the Difficulty argument into our function

// Initliazation of the 3 randomly generated codes for the current round, the range of the numbers produced increases when the difficulty increases due to the player advancing further in the game.
  const int CodeA = rand() % Difficulty + Difficulty;
  const int CodeB = rand() % Difficulty + Difficulty;
  const int CodeC = rand() % Difficulty + Difficulty;

// Initliazation of the sum and product of the randomly generated codes for the round
  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

// Print CodeSum and CodeProduct to the terminal
  std::cout << "\nThere are 3 numbers in the code!";
  std::cout << "\nThe sum of the codes is: " << CodeSum;
  std::cout << "\nThe product of the codes is: " << CodeProduct << std::endl;

// Store player's guesses
  int GuessA, GuessB, GuessC;
  std::cin >> GuessA >> GuessB >> GuessC;
  std::cout << "You entered:  " << GuessA << GuessB << GuessC << std::endl;

// Store's the sum and product of the player's guesses
  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA * GuessB * GuessC;

  // Checking each guess
  if (CodeA == GuessA && CodeB == GuessB && CodeC == GuessC){
    std::cout << "\nCode 1: " << bool(CodeA == GuessA);
    std::cout << "\nCode 2: " << bool(CodeB == GuessB);
    std::cout << "\nCode 3: " << bool(CodeC == GuessC);
    return true;
  }
  else {
    std::cout << "\nCode 1: " << bool(CodeA == GuessA);
    std::cout << "\nCode 2: " << bool(CodeB == GuessB);
    std::cout << "\nCode 3: " << bool(CodeC == GuessC);
    return false;
  }


// Checks if player's guess is correct
  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\nThe sacred spirits are pleased and have unlocked the door to the next trial."; // this message will let the player know they have passed the curent round
    return true; // the function will return that the player has suceeded and that the function can move onto the next round
  }
  else
  {
    std::cout << "\nThe sacred spirits look down upon you for your stupidity, try again fool."; // this message will let the player know they have failed the current round
    return false; // the function will return that the player has failed and that the function has to loop back to the same round
  }

}

/**
 * For the second part of this game. We want to add a life system in this game. 
 * We want to start with 3 lives and lose a life for every wrong answer.
 * 
 * For the third part of this game, We want to display to the user which locks are currently ok and which are wrong.
 *  Example: Product 12
 * 
 * Sequence - 4 1 3 -> 4 3 1
 * 
 * Lock 1: 0 -> 0
 * Lock 2: 1 -> 0 
 * Lock 3: 1 -> 0 
 * 
 * 
 * Fourth part of this game. We want to maintain the same Codes for each level and session. Currently it keeps randomizing.
 * Hint read: srand()
 */

int main() // Every code must include a main function and this is where we execute the central part of the code
{   
    srand(time(NULL)); // create new random sequence based on time of day

    int LevelDifficulty = 1; // initliazes the variable that will represent what level the player is currently on
    int const MaxDifficulty = 5; // initiliazes the the variabe that sets the max number of levels in our game
    int NumberOfTries = 3; // initializes the variable that determines the amount of lives a player has

    while (LevelDifficulty <= MaxDifficulty && NumberOfTries >= 0) // Loops game until all levels are completed
   {
      bool bLevelComplete = PlayGame(LevelDifficulty); // Stores if the player has completed the level
      std::cin.clear(); // clears errors
      std::cin.ignore(); // discards the buffer

      if (bLevelComplete == false) 
      {
        --NumberOfTries;
        if (NumberOfTries <= 0){
          std::cout << "\n\nThe spirits tire of your incompetence and refuse to let you try any further, get out of here NOW!\n\n";
          return 0;
        }
        std::cout << "\n\nYou have lost one your tries at cracking the mystical code. You have " << NumberOfTries; 
        std::cout << " lives left.\n\n";
        }
        else {
      ++LevelDifficulty; // increase the level difficulty
      std::cout << "\n\n You have pleased the sacred spirits, please carry onto the next trial.\n\n";
      }
  }
  std::cout << "\nYou have sucessfully made it through all 5 trials, congratulations for wasting your time because nothing lies behind these doors!\n";
  return 0;

  //hahdi comments
}