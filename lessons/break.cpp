#include <iostream>

int main(){

    int n;

    while (true)
    {
        std::cout << "enter 1 to stop: ";
        std::cin >> n;

        if (n == 5){
            continue;
        }
        else if (n == 1){
            break;
        }
    }
    

    return 0;
}