//Hahdi will code in here.

#include <iostream>
#include <ctime>

void PlayGameAtDifficulty(int difficulty){
    std::cout <<"skip level.";
}

int main() {
    int difficulty = 2;
    int maxDifficulty = 10;
    while (difficulty <= maxDifficulty) {
        PlayGameAtDifficulty(difficulty);
        std::cin.clear(); //cleras the failbit
        std::cin.ignore(); //discards teh buffer
        ++difficulty;
    }

    std::cout << "WOW - You won. You're really good at this!\n";
    return 0; //exit with no error code
}