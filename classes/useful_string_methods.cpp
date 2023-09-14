#include <iostream>

int main(){

    /*/
    length() = the length of a string.
    append() = append something to a string.
    empty() = chack if the string is empty.
    clear() = clear the string.
    at(n) = give the char in the n position .
    insert(n, string) = insert a char in the position passed.
    find('char') = find the char passed in the string returning the index position.
    erase(n, n) = remove the chars passed enter the number like 0, 3 will remove 0, 1, 2 and 3.
    */

    std::string user_name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, user_name);
    user_name.append("@gmail.com");

    if (user_name.length() > 20){
        std::cout << "Your name can't be over 12 characters"; 
    }
    else if(user_name.empty()){
        std::cout << "Please enter a name!";
    }
    else{
        std::cout << "Welcome " << user_name << "\n";
    }

    user_name.clear();

    std::cout << user_name;

    return 0;
}