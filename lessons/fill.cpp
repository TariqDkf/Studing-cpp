#include <iostream>

int main()
{

    /*
    fill() = Fills a range of elements whit a special value
                fill(beggin, end, value)
    */

    const int size = 99;

    std::string foods[size];

    fill(foods, foods + size/3 , "Pizza");
    fill(foods + size/3, foods + (size/3)*2 , "hamburguer");
    fill(foods + (size/3)*2, foods + size , "hotdog");

    for(std::string food : foods)
    {
        std::cout << food;
    }

    return 0;
}