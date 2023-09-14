#include <iostream>
#include <cmath>

int main(){

    char op;
    double number_one;
    double number_two;
    double result;

    std::cout << "Enter a number: ";
    std::cin >> number_one;
    std::cout << "Enter an operator (+ - * /): ";
    std::cin >> op;
    std::cout << "Enter a number: ";
    std::cin >> number_two;

    switch (op)
    {
    case '+':
        result = number_one + number_two;
        break;
    case '-':
        result = number_one - number_two;
        break;
    case '*':
        result = number_one * number_two;
        break;
    case '/':
        if (number_two != 0) {
            result = number_one / number_two;
        } else {
            std::cout << "Error: Division by zero is not allowed!";
            return 1; // Sair com código de erro
        }
        break;
    default:
        std::cout << "Please enter a valid operator!";
        return 1; // Sair com código de erro
    }

    std::cout << "The result of " << number_one << " " << op << " " << number_two << " is " << result;

    return 0;
}
