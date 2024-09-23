#include <iostream>

// typedef std::string text_t;
// using num_t = int;

// type conversion : implict and explicit

// division (/) operator
// Divides the first operand by the second.
// For integer division, it truncates the decimal part, returning an integer result.

// cout << (insertion operator)
// cin >> (extraction operator)

// In C++, getline() is a standard library function used to read an entire line of text, 
// including spaces, from an input stream (like cin or a file). 
// This is particularly useful when you want to read a string that contains spaces, as cin (when used alone) stops reading at the first whitespace character.


int main(){
    // text_t name = "Mohd Taufeeq Khan";
    // std::cout << name << std::endl;
    // num_t x = 100;
    // std::cout << x << std::endl;

    // int x = 100;
    // char y = (char) x;
    // std::cout << y << std::endl;

    // int correct = 7;
    // int questions = 10;
    // double score = ((double)7/10) * 100;
    // std::cout << score << "%" << std::endl;

    std::string name;
    int age; 

    std::cout << "what's your name? " << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    std::cout << "Nice to meet you!" << std::endl; 
    std::cout << "May I know your age please? " << '\n';
    std::cin >> age; 
    std::cout << "oh so you are " << age << " years old" << std::endl;


    // std::cout << (double)4/5 << std::endl;
    return 0;
}