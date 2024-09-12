#include <iostream>
#include "MathLib.h"

int main() {
    double a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Addition: " << MathLibrary::add(a, b) << std::endl;
    std::cout << "Subtraction: " << MathLibrary::subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << MathLibrary::multiply(a, b) << std::endl;

    try {
        std::cout << "Division: " << MathLibrary::divide(a, b) << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
