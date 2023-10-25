#include <iostream>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    } else if (exponent > 0) {
        double result = 1.0;
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
        return result;
    } else {
        double result = 1.0;
        for (int i = 1; i <= -exponent; i++) {
            result /= base;
        }
        return result;
    }
}

int main() {
    double base;
    int exponent;

    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;
  
    double result = power(base, exponent);

    std::cout << base << "^" << exponent << " = " << result << std::endl;

    return 0;
}
