#include <iostream>
#include <typeinfo>

// namespace myCode {
//     void display(){
//         // nothing
//     }
// }

// A literal is a program element that directly represents a value.

/*
Integer literal,
floating-point literal,
boolean literal,
adn pointer literal.
*/

// Literals are most commonly used to initialize named variables and to pass arguments to functions.

/*
When no prefix or suffix is present, the compiler will give an integral literal value type int (32 bits), 
if the value will fit, otherwise it will give it type long long (64 bits).
*/

// octal literal -> 0 to 7
// hexadecimal literal -> a or A to f or F and 0 to 9

/*
Floating-point literals have a significand (sometimes called a mantissa), which specifies the value of the number. 
They have an exponent, which specifies the magnitude of the number.
*/

int main() {
    int num = 10;  // decimal literal
    int i = 0121;  // octal literal
    int j = 0x4abc;
    unsigned long long s = 345623445LLU;
    long l = 26754;
    float f = 3.14f;
    double d = 1.00873;
    double e = 2.34e2;
    // character literals
    auto c0 = 'T'; // char
    std::cout << c0 << std::endl;
    std::cout << e << std::endl;
    std::cout << d << std::endl;
    std::cout << f << std::endl;
    std::cout << l << std::endl;
    std::cout << s << std::endl;
    std::cout << "Type of s: " << typeid(s).name() << std::endl;
    std::cout << j << std::endl;
    std::cout << i << std::endl;
    return 0;
}