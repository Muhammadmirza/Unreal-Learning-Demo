#include <iostream>
using namespace std;

int main()
{
 // Print introduction to the prompt
 std::cout << "Welcome to the trial of the sacred doors \n";
 std::cout << "Enter the mystical code to unlock the door and move on to the next trial.\n";
  
  // Declare 3 number code
  const int CodeA = 1;
  const int CodeB = 2;
  const int CodeC = 3;
  const int CodeSum = CodeA + CodeB + CodeC;
  const int CodeProduct = CodeA * CodeB * CodeC;
  
  // Print hints
  std::cout << "\n There are 3 numbers in the code!";
  std::cout << "\n The sum of the codes is: " << CodeSum;
  std::cout << "\n The product of the codes is: " << CodeProduct;

  // Store Player Guesses
  int GuessA, GuessB, GuessC;
  std::cout << std::endl;
  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;
  std::cout << "You entered:  " << GuessA << GuessB << GuessC << std::endl;

  int GuessSum = GuessA + GuessB + GuessC;
  int GuessProduct = GuessA + GuessB + GuessC;

  // Print results

  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "\n The sacred spirits are pleased and have unlocked the door for your correct answer.";
  }
  else
  {
    std::cout << "\n The sacred spirits look down upon you for your stupidity, you lose.";
  }
  return 0;

  //hahdi comments
}