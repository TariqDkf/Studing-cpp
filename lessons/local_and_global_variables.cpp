#include <iostream>

/*
:: = set the variable to the global scope
*/

void printNum();

int myNum = 5;

int main(){
    
    int myNum = 2;
    printNum();
    std::cout << myNum << "\n";

    return 0;
}

void printNum(){
    int myNum = 1;
    std::cout << myNum << "\n";
}