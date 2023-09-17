#include <iostream>

int main()
{

    /*
    sizeof() = determines the size in bytes of a:
               variable, data type, class, objects, etc.
    */

    std::string name = "Tariq";
    double gpa = 2.5;
    char grade = 'f';
    bool student = true;
    char grades[] = {'A', 'b', 'c', 'd', 'e'};

    std::cout << "the size of gpa " << sizeof(gpa) << " Bytes\n";
    std::cout << "the size of name " << sizeof(name) << " Bytes\n";
    std::cout << "the size of grade " << sizeof(grade) << " Bytes\n";
    std::cout << "the size of student " << sizeof(student) << " Bytes\n";
    std::cout << "the size of grades " << sizeof(grades) << " Bytes\n";
    std::cout << "the size of grades is " << sizeof(grades)/sizeof(char) << " elements";

    

    return 0;
}