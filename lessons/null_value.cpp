#include <iostream>

int main()
{
    /*
    
    Null value = a special value that means something has no value.
            when  a pointer is holding a null value,
            that poniter is not pointing at anything (null position).

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
       was sucessfuly assigned to a pointer.
    
    // When using pointers, be careful that your code isn't
       dereferencing null or pointing to free memory
       this is cause undefined behavior

    */

    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;

    if (pointer == nullptr){
        std::cout << "Address was not assigned!\n";
    }
    else{
        std::cout << "Address was assigned\n";
        std::cout << *pointer;
    }

    return 0;
}