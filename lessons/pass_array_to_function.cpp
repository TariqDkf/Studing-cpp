#include <iostream>

double getTotal(double prices[], int size);

int main()
{

    /*
    For pass a array to a function if you want the size you need to pass thogeter    
    */

    double prices[] = {49.99, 15.05, 75, 9.99};
    int prices_size = sizeof(prices)/sizeof(double);
    double total = getTotal(prices, prices_size);

    std::cout << "The total is $" << total;

    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;
    for(int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}