#include <iostream>

int main(){

    /*
    Ternary operator ?: = replacemente of if/else statament 
    condition ? expression1 : expression2;
    */

    int grade = 50;
    grade > 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    return 0;
}