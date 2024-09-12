#include "MathLib.h"
#include <stdexcept>  // Để xử lý ngoại lệ trong hàm chia

namespace MathLibrary {
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return a / b;
    }
}
