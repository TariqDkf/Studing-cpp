#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
void bakePizza(std::string topping, std::string topping2);

int main(){

    bakePizza();
    bakePizza("peperoni");
    bakePizza("peperoni", "mushrooms");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping){
    std::cout << "Here is your " << topping << " pizza!\n";
}

void bakePizza(std::string topping, std::string topping2){
    std::cout << "here is your " << topping << " and " << topping2 << " pizza!\n";
}