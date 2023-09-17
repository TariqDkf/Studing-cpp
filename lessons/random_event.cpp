#include <iostream>
#include <ctime>

int main(){
    
    // pseudo-random = NOT true random but close

    srand(time(NULL));
    
    int num = rand() % 5 + 1;

    switch (num)
    {
    case 1:
        std::cout << "You win a bumper sticker!";
        break;
    case 2:
        std::cout << "You win a t-shirt!";
        break;
    case 3:
        std::cout << "You win a free lunch!";
        break;
    case 4:
        std::cout << "You win a gift-card!";
        break;
    case 5:
        std::cout << "You win concert tickets!";
        break;
    }
    return 0;
}