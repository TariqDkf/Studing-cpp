#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double c = 3.14;
    double z;

    z = std::max(x, y);

    std::cout << "The highest number in Z is " << z << "\n";

    z = std::min(x, y);

    std::cout << "The lower number in z is " << z << "\n";

    z = pow(2, 3);

    std::cout << "2 of the power of 3 is " << z << "\n";

    z = sqrt(9);

    std::cout << "The SQRT of z is " << z << "\n";

    z = abs(-10);

    std::cout << "The Absolute value of z is " << z << "\n";

    z = round(c);

    std::cout << "The round of C is " << c << "\n";

    z = ceil(c);

    std::cout << "The ceil of C is " << c << "\n";

    z = floor(c);

    std::cout << "The floor of C is " << c << "\n";
    return 0;
}