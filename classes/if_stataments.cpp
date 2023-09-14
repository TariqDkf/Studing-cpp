#include <iostream>

int main(){

    int user_age;
    int minimun_age = 18;

    std::cout << "How old are you? ";
    std::cin >> user_age;

    if (user_age >= 100){
        std::cout << "You are too old to enter this site";
    }
    else if (user_age >= minimun_age){
        std::cout << "You can enter the site";
    }
    else if (user_age < 0){
        std::cout << "You haven't ben born yet!";
    }
    else{
        std::cout << " You can not enter the site";
    }

    return 0;
}