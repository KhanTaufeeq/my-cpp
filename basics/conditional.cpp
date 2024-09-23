#include <iostream>

int main() {
    // switch - alternative to using many "else if" statments.
    //          compare one value against matching cases

    char opr;
    double a;
    double b;

    std::cout << "***************CALCULATOR***************" << std::endl;
    std::cout << "Please enter the #1 value: " << std::endl;
    std::cin >> a;
    std::cout << "Please enter the #2 value: " << std::endl;
    std::cin >> b;
    std::cout << "What do you wanna do with these numbers (+, -, *, /)? " << std::endl;
    std::cin >> opr;
    switch (opr)
    {
    case '+':
        
        break;
    
    default:
        break;
    }
    std::cout << "****************************************";
    return 0;
}