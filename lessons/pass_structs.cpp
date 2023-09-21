#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void paint_car(Car &car);

void print_members(Car car);


int main(){

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "Blue";

    paint_car(car1);
    
    print_members(car1);
    print_members(car2);

    return 0;
}

void print_members(Car car){
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}

void paint_car(Car &car){
    car.color = "Yellow";
}