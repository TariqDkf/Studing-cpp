#include <iostream>

int main(){

    /*
    Do while loop = do some block of code first,
    THEN return if condition is true.
    */

    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);


    return 0;
}