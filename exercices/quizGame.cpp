#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    const int random_number = (rand() % 100) + 1;
    int guessed_number;
    bool guessed_correctly = false; // Adicione uma variável para controlar se o número foi adivinhado corretamente.

    std::cout << "Guess the number!";
    
    while (!guessed_correctly) { // Altere a condição do loop.
        std::cout << "Guess a number: ";
        std::cin >> guessed_number;
        
        if (guessed_number < random_number) {
            std::cout << "Bigger" << std::endl;
        }
        else if (guessed_number > random_number) {
            std::cout << "Lower" << std::endl;
        }
        else {
            std::cout << "This is the right number!" << std::endl;
            guessed_correctly = true; // Defina a variável para true para encerrar o loop.
        }
    }

    return 0;
}
