#include <iostream>

unsigned long long Factorial(int number) {
    if (number < 0) {
        return 0;
    } else if (number == 0 || number == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= number; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    unsigned long long factorial = Factorial(number);

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "The factorial of " << number << " is: " << factorial << std::endl;
    }

    return 0;
}
