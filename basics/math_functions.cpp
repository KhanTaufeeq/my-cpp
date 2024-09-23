#include <iostream>
#include <cmath>

int main () {
    // int x = 3;
    // int y = 9;

    // int z;
    // int w;
    // z = std::max(x,y);
    // w = std::min(x,y);
    // std::cout << w << std::endl;
    // std::cout << z << std::endl;

    // std::cout << pow(2,4) << std::endl;
    // std::cout << sqrt(8) << std::endl;
    // std::cout << abs(-20) << std::endl; 
    // std::cout << round(3.5) << std::endl;
    // std::cout << ceil(3.2) << std::endl;
    // std::cout << floor(3.2) << std::endl;

    // Hypotenuse calculator program 

    double perpendicular, base, hypo;
    double perpendicular_sqaure, base_square;
    std::cout << "Please enter the value of perpendicular: " << std::endl;
    std::cin >> perpendicular;
    std::cout << "Please enter the value of base: " << std::endl;
    std::cin >> base; 
    perpendicular_sqaure = pow(perpendicular,2); 
    base_square = pow(base, 2);
    hypo = sqrt(perpendicular_sqaure + base_square);  

    std::cout << "the hypotenuse of given triangle is:  " << hypo << std::endl;
}