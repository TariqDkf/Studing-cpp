#include <iostream>

int main(){

    /*
    && = check if two condition are true
    || = check if the last one of tow condition is true 
    ! = reverse the logical state of its operand
    */

    int temp;
    bool sunny;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp <= 0 || temp > 30){
        std::cout << "The temperature is bad!";
    }
    else{
        std::cout << "The temperature is good!" << "\n";
    }

    if(!sunny){
        std::cout<< "it is cloud outised!" << "\n";
    }
    else{
        std::cout << "it is sunny outiside!";
    }

    return 0;
}