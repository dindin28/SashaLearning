#include <iostream> // std::cout, std::cin
#include <cstdlib> // EXIT_SUCCESS
#include <cmath>   // std::sin, std::exp

double func(double x, double y) {
    // it possible to use old version:
    // sin(x) + exp(2 * y);
    return std::sin(x) + std::exp(2 * y);
}

int main() {
    double x, y;

    // instead of func printf, we use object with operators "<<"
    // it calls stream input/output
    // also we can use std::cout << "sin(x) + exp(2*y)\n\n"; instead of <see lower>
    std::cout << "sin(x) + exp(2*y)" << std::endl << std::endl;

    std::cout << "Enter x: ";
    std::cin >> x; // to write variable, we use std::cin instead of scanf

    std::cout << "Enter y: ";
    std::cin >> y;

    std::cout << "sin(x) + exp(2*y) = " << func(x, y) << std::endl;

    return EXIT_SUCCESS; 
}