#include <iostream>

int main()
{
    /*
    pointers = variable that stores a memory address of another varible
        sometimes it's easier to work whit an address

    // & address-of operator
    // * dereference operator 
    */

    std::string name = "Tariq";
    int age = 21;
    std::string freePizza[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"}

    std::string *pName = &name;
    int *pAge = &age;
    std::string pFreePizza = freePizza

    std::cout << pName;
    std::cout << pAge;

    return 0;
}