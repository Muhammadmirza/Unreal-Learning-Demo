#include <iostream>
using namespace std;

int main()
{
 // Print introduction to the prompt
 std::cout << "Welcome to the trial of the sacred doors";
 std::cout << std::endl;
 std::cout << "Enter the mystical code to unlock the door and move on to the next trial.";
  
  // Declare 3 number code
  std::cout << std::endl;
  int CodeA = 6;
  int CodeB = 2;
  int CodeC = 9;
  int CodeSum = CodeA + CodeB + CodeC;
  int CodeProduct = CodeA * CodeB * CodeC;
  
  // Print results
  std::cout << std::endl;
  std::cout << "There are 3 numbers in the code!" << std::endl;
  std::cout << "The sum of the codes is: " << CodeSum << std::endl;
  std::cout << "The product of the codes is: " << CodeProduct << std::endl;

  int GuessA, GuessB, GuessC;
  std::cin >> GuessA;
  std::cin >> GuessB;
  std::cin >> GuessC;
  std::cout << "You entered:  " << GuessA << GuessB << GuessC << std::endl;

  return 0;

  //hahdi comments
}