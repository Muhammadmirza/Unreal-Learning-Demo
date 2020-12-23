//Hahdi will code in here.

#include <iostream>
#include <ctime>

bool PlayGameAtDifficulty(int Difficulty){
    std::cout << "Welcome to level " << Difficulty <<"!\n";
    std::cout << "Figure out the code! \n";
    std::cout << "Numbers Range between 1 - "<< 5+Difficulty <<"\n";

    //Maintain Randomization for this session and Initialize Codes.
    srand(1);
    int const CodeA = (rand() % (5+Difficulty)+1)*Difficulty;
    int const CodeB = (rand() % (5+Difficulty)+1)*Difficulty;
    int const CodeC = (rand() % (5+Difficulty)+1)*Difficulty;
    int const CodeSum = CodeA+CodeB+CodeC;
    int const CodeProduct = CodeA*CodeB*CodeC;

    /*
    Print Code Sum and Code Product
    */
    std::cout << "\n";
    std::cout << "There are 3 numbers in the code!\n";
    std::cout << "There sum adds upto: "<< CodeSum << "\n";
    std::cout << "There product multiplies upto: "<< CodeProduct << "\nInput your Guesses: \n \tNote: (Seperate with spaces or press enter after each number): ";

    /*
    Initial Guess Variables
    */

    int GuessA,GuessB,GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "\n+++ You entered: "<< GuessA <<GuessB << GuessC << " +++\n";

    //Test the Guesses.
    if (GuessA==CodeA && GuessB==CodeB && GuessC==CodeC){
        std::cout << "Right Guess\n\n";
        std::cout << "Status of Locks:\n";
        std::cout << "\n\t Lock 1:" << bool(GuessA==CodeA);
        std::cout << "\n\t Lock 2:" << bool(GuessB==CodeB);
        std::cout << "\n\t Lock 3:" << bool(GuessC==CodeC);
        return true;
        }
    else {
        std::cout << "Wrong Guess\n\n";
        std::cout << "Status of Locks:\n";
        std::cout << "\n\t Lock 1:" << bool(GuessA==CodeA);
        std::cout << "\n\t Lock 2:" << bool(GuessB==CodeB);
        std::cout << "\n\t Lock 3:" << bool(GuessC==CodeC);
        return false;
    }

}

int main() {
    srand(time(NULL));
    std::cout <<"Hello Bond, Start your mission,\n";

    int Difficulty = 1;
    int const MaxDifficulty = 4;
    int Life =3;
    bool BLevelComplete;
    while (Difficulty <= MaxDifficulty && Life > 0) {
        BLevelComplete = PlayGameAtDifficulty(Difficulty);
        if(BLevelComplete != true){
            --Life;
            if (Life <= 0){
                std::cout << "\n\n*** You have lost all of your lives. Game over. ***\n\n\n";
                return 0;
            }
            std::cout << "\n\nX_X You lost a life. You have "<< Life <<" lives left! X_X\n\n";
            std::cin.clear(); //clears the failbit
            std::cin.ignore(); //discards teh buffer
        }else {
            std::cin.clear(); //clears the failbit
            std::cin.ignore(); //discards teh buffer
            ++Difficulty;
            Life+=3;
            std::cout << "\n\n You have completed this level. Onwards to the next Level \n\n\n";
        }
    };

    std::cout << "WOW - You won. You're really good at this!\n";
    return 0; //exit with no error code
}