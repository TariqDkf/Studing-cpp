#include <iostream>

template <typename T, typename U>

auto max(T y, U x){
    return (x > y) ? x : y;
}


int main(){

    // function template = describe what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using differents data types

    std::cout << max('2', '3.2') << "\n";

    return 0;
}