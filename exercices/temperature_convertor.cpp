#include <iostream>
#include <cctype>

int main(){

    double temp;
    char unit;

    std::cout << "----------------------------" << "\n";
    std::cout << "----------Converter---------" << "\n";
    std::cout << "----------------------------" << "\n";

    std::cout << "Fahreinheit = F" << "\n";
    std::cout << "Celcius = C" << "\n";

    std::cout << "Enter the unit C/F : ";
    std::cin >> unit;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    unit = std::toupper(unit);

    switch (unit)
    {
    case 'C':
        temp += (temp * 1.8) + 32;
        unit = 'F';
        break;
    case 'F':
        temp = (temp - 32)/1.8;
        unit = 'C';
        break;
    default:
        std::cout << "Please enter a valid unit c/k";
        return 1;
    }

    std::cout << "The temperature converted is " << temp << unit;

    return 0;
}