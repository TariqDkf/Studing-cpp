#include <iostream>

/*
Name space = provides a solution for prevating name conflits
in large projects. Each entity needs a unique name.
A namespace allows for identically named entities
as long as the namespaces are different.
*/

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first; //Using means that we are using that in ur project
    using std::string;
    using std::cout;

    cout << x;

    return 0;
}