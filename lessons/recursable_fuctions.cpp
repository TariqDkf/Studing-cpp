#include <iostream>

void walk(int steps);

int main(){

    /*
    recursion = a progaming technique where a function
                invokes itself from within
                break a complex concept into a repetable single step

    (iterative vs recursive)

    advantages = less code and is cleanear 
                 useful for sorting and searching algorithms

    disavantages = uses more memory
                   slower
    */

    walk(100);

    return 0;
}

void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps-1);
    }
}