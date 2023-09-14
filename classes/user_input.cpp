#include <iostream>

/*
cout << (insert operator)
cin >> (extration operator)
*/

int main(){

    std::string user_name;
    int user_age;

    std::cout << "Whats is your age? ";
    std::cin >> user_age;

    std::cout << "Whats is your full name? ";
    std::getline(std::cin >> std::ws, user_name);


    std::cout << "hello " << user_name << "\n";
    std::cout << "You are " << user_age << " Years old"; 

    return 0;
}
