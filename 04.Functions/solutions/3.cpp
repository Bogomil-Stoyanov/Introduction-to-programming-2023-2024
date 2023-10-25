#include <iostream>
#include <cmath>

const double PI = 3.14159265359;

double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

double calculateArea(double radius) {
    return PI * pow(radius, 2);
}

int main() {
    double radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    if (radius < 0) {
        std::cout << "Invalid input. Please enter a non-negative radius." << std::endl;
        return 1;
    }

    double circumference = calculateCircumference(radius);
    double area = calculateArea(radius);

    std::cout << "Circumference of the circle with radius " << radius << " is: " << circumference << std::endl;
    std::cout << "Area of the circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}
