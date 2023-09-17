#include <iostream>
#include <ctime>

int main(){
    
    // pseudo-random = NOT true random but close

    srand(time(NULL));
    
    int num = rand() % 20 + 1;

    std::cout << num;

    return 0;
}