#include <iostream>

double square(double length);

double cube(double length);

int main(){

    double length = 5.0;

    double square_v = square(length);
    double cube_v = cube(length);

    std::cout << "Area: " << square_v << "cm^2" << "\n";
    std::cout << "Volume: " << cube_v << "cm^2" << "\n";

    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}