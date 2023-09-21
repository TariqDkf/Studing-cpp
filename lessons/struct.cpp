#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};


int main(){

    /*
    struct = A structure tha a group related variables under one name
             structs can contain many different data types (strings, int, double, bool, etc.)
             variables in a struct are known as "members"
             members can be access with . "Class Member Access Operator"
    */

    student student1;
    student1.name = "Tariq";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Clara";
    student2.gpa = 10;
    student2.enrolled = false;

    student student3;
    student3.name = "Vitor";
    student3.gpa = 8;
    student3.enrolled = false;

    std::cout << student1.name << "\n";
    std::cout << student1.gpa << "\n";
    std::cout << student1.enrolled << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.gpa << "\n";
    std::cout << student2.enrolled << "\n";

    std::cout << student3.name << "\n";
    std::cout << student3.gpa << "\n";
    std::cout << student3.enrolled << "\n";
    return 0;
}