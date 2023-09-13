#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t

//typedef std::string string_t;
//typedef int number_t;
//typedef std::cout print_f

using string_t = std::string;
using number_t = int;

int main(){

    /*
        typedef = reserved keywords use to create a additional name 
        (alias) for another data type.
        New identifier for an existing type
        Helps with readability and reduces typos     
    */

    //pairlist_t

    string_t Name = "Tariq";
    number_t Age = 17;
    std::cout << Name << "\n";
    std::cout << Age << "\n";

    return 0;
}