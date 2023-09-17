#include <iostream>


int main()
{

    /*
    array = a data structure that can hold multiple values
        values are acessed by a index number
        "Kind of like a variable that holds multiple values"
    */

    std::string cars[3];

    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n";

    double prices[] = {20000, 10000, 50000};

    std::cout << prices[0] << "\n";
    std::cout << prices[1] << "\n";
    std::cout << prices[2] << "\n";

    return 0;
}