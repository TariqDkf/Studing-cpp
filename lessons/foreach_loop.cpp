#include <iostream>

int main(){

    /*
    foreach loop = loop that eases the traversal over an iterable dat set
    */

    std::string studants[] = {"Spongebob","Patrick","Sandy"};
    int grades[] = {56, 12, 213, 42, 23};
    char initials[] = {'T', 'A', 'R', 'I', 'Q'};

    for(std::string studant : studants)
    {
        std::cout << studant << "\n";
    }
    for(int grade : grades)
    {
        std::cout << grade << "\n";
    }
    for(char init : initials)
    {
        std::cout << init << "\n";
    }

    return 0;
}