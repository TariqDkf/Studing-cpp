#include <iostream>

void happyBirthDay(std::string name, int age);

int main(){

    std::string user_name = "Tariq";
    int age = 17;

    happyBirthDay(user_name, age);
     
    return 0;
}

void happyBirthDay(std::string name, int age){
    std::cout << "Hapy Birthday to you! " << name << "\n";
    std::cout << "Hapy Birthday to you! " << name << "\n";
    std::cout << "Hapy Birthday dear you! " << name << "\n";
    std::cout << "Hapy Birthday to you! " << name << "\n";
    std::cout << "you are " << age << " old";
}