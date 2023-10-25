#include <iostream>

double findMaximum(double num1, double num2, double num3) {
    double max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    return max;
}

double findMinimum(double num1, double num2, double num3) {
    double min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    return min;
}

int main() {
    double num1, num2, num3;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    double maximum = findMaximum(num1, num2, num3);
    double minimum = findMinimum(num1, num2, num3);

    std::cout << "Maximum number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << maximum << std::endl;
    std::cout << "Minimum number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << minimum << std::endl;

    return 0;
}
