#include <iostream>
#include <ctime>

void PrintIntroduction (int Difficulty)
{
  std::cout << "\n\nWelcome to the trial of the sacred doors, this is trial number " << Difficulty;
  std::cout << "\nEnter the mystical code to unlock the door and move on to the next trial.\n";
}

bool PlayGame (int Difficulty)
{
  PrintIntroduction (Difficulty);

  const int CodeA = rand() % Difficulty + Difficulty;
  const int CodeB = rand() % Difficulty + Difficulty;
  const int CodeC = rand() % Difficulty + Difficulty;

  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;

  std::cout << "\nThere are 3 numbers in the code!";
  std::cout << "\nThe sum of the codes is: " << CodeSum;
  std::cout << "\nThe product of the codes is: " << CodeProduct;

  int GuessA, GuessB, GuessC;
  std::cout << std::endl;
  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;
  std::cout << "You entered:  " << GuessA << GuessB << GuessC << std::endl;

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA + GuessB + GuessC;

  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\nThe sacred spirits are pleased and have unlocked the door to the next trial.";
    return true;
  }
  else
  {
    std::cout << "\nThe sacred spirits look down upon you for your stupidity, try again fool.";
    return false;
  }

}
int main()
{
    srand(time(NULL)); // create new random sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loops game until all levels are completed
   {
      bool bLevelComplete = PlayGame(LevelDifficulty);
      std::cin.clear(); // clears errors
      std::cin.ignore(); // discards the buffer

      if (bLevelComplete) {
        ++LevelDifficulty; // increase the level difficulty

      }
  }
  std::cout << "\nYou have sucessfully made it through all 5 trials, congratulations for wasting your time because nothing lies behind these doors!";
  return 0;

  //hahdi comments
}