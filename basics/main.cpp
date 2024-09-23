#include <iostream>
#include <cstring>
#include <string>

// using namespace std;

// In C++, strings can be handled in two main ways:

// C-style strings (character arrays)

// C++ std::string class (from the Standard Library)

// namespace 

namespace first_name{
    int x = 1;
    namespace inner{
        float x = 1.1;
    }
}

namespace second_name{
    int x = 2;
}

int main(){
    // char letter[4] = "ABC";
    // cout << letter[2] << endl;
    // cout << "length of my string: " << strlen(letter) << endl;

    // string full_name = "Mohd Taufeeq Khan";
    // cout << "My full name is: " << full_name << endl;
    // cout << "the length of my name is: " << full_name.length() << endl;
    // cout << "my middle name is: " << full_name.substr(5,7) << endl;

    int x = 0;

    std::cout << x << std::endl;
    std::cout << first_name::x << std::endl;
    std::cout << second_name::x << std::endl;
    std::cout << first_name::inner::x << std::endl;

    // namespaces can only be defined in global or namespace scope

    return 0;
}

