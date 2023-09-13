#include <iostream>
#include <cstdlib>

int main(){
    std::string user_name;
    std::string user_age;
    std::string user_country;
    std::cout << "Digite seu nome: "; 
    std::cin >> user_name;
    std::cout << "Digite sua idade: "; 
    std::cin >> user_age;
    std::cout << "Digite seu pais: "; 
    std::cin >> user_country;

    std::cout << "O nome do usuario e " << user_name << "\n"; 
    std::cout << "A idade do usuario e " << user_age << "\n";
    std::cout << "O pais do usuario e" << user_country<< "\n";
}
