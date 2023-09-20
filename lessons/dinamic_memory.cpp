#include <iostream>

int main(){

    /*
    dynamic memory = Memory that is allocated after the program
                     is arlredy compiled & running.
                     Use  the 'new' operator to allocate 
                     memory in the heap rather than the stack

                     Useful when we don't know how much memory
                     we will need. Makes our programs more flexibe,
                     especially when accepting user input.
    */

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << "\n";
    std::cout << "Value: " << *pNum << "\n";

    delete pNum;

    return 0;
}