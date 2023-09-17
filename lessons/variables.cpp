#include <iostream>

int main(){
    int x; //declaration
    x = 5;  //assignment

    int y = 6; //declaration and assignment

    std::cout << x << std::endl; //printing the variable
    std::cout << y << std::endl; //printing the variable
    std::cout << x + y << std::endl; //printing the sum of the variables

    double z = 7.5; //this is a double he store decimals
    double price = 10.99; //this is a double he store decimals
    double temperature = 2.5; //this is a double he store decimals
    std::cout << z << std::endl; //printing the variable
    std::cout << price << std::endl; //printing the variable
    std::cout << temperature << std::endl; //printing the variable

    // single character assignment, only can assing ONE char
    char grade = 'A'; //assignment
    char initial = 'T'; //assignment

    std::cout << grade << std::endl; //printing the variable
    std::cout << initial << std::endl; //printing the variable

    // booleans (true or false)
    bool happy = true; //assignment
    bool sad = false; //assignment
    bool forSale = true; //assingment

    std::cout << forSale << std::endl; //printing the variable
    std::cout << happy << std::endl; //printing the variable
    std::cout << sad << std::endl; //printing the variable

    // strings (object that represent a sequence of chars)
    std::string name = "Tariq"; //assing the variable ussing "std" to make a string
    std::string day = "Moonday"; //assing the variable ussing "std" to make a string 
    std::cout << name << std::endl; //assing the variable ussing "std" to make a string
    std::cout << day << std::endl; //assing the variable ussing "std" to make a string

    return 0;
}