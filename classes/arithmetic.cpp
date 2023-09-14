#include <iostream>

int main(){

    /* Arithmetic operators = return the result of a specific 
    aritihmetic operation (+ - * /)
    */

    int students = 20;

    //students += 1;
    //students = students + 1
    // += -= *= /= 

    students++;
    students--;

    int remainder = students % 3;

    std::cout << remainder;

    return 0;
}