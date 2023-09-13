#include <iostream>

int main(){
    //The const keyword specifies that a variable's value is constant
    //tells the compiler to prevent anything from modifying it
    //(read only)

    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

    const int LIGHT_SPEED = 2999792458;
    const int WIDTH = 1920;
    const int HEIGTH = 1080;
    
    //is a good pratice use UPPERCASE to define a const variable

    return 0;
}