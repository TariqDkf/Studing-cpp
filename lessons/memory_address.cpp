#include <iostream>

int main(){

    /*
    memory address = a location in memory where data is stored
    a memory address can accessed whit & (address-of-operator)
    */

    std::string name = "Tariq";
    int age = 21;
    bool studant = true;

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &studant << "\n";

    return 0;
}