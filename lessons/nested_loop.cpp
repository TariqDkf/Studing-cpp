#include <iostream>

int main(){

    int rows;
    int coluns;
    char symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;
    std::cout << "How many coluns: ";
    std::cin >> coluns;
    std::cout << "what symbol: ";
    std::cin >> symbol;

    for (int i=1; i<=rows; i++){
        for (int j=1; j<=coluns; j++){
            std::cout<< symbol;
        }
        std::cout<< "\n";
    }

    return 0;
}