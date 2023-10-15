#include <iostream>
#include <cmath>

int main()
{
    double x, y;
    int choice;

    std::cout << "Enter a real number (x): ";
    std::cin >> x;

    std::cout << "Choose an expression:" << std::endl;
    std::cout << "1. y = x - 5" << std::endl;
    std::cout << "2. y = sin(x)" << std::endl;
    std::cout << "3. y = cos(x)" << std::endl;
    std::cout << "4. y = exp(x)" << std::endl;
    std::cout << "Enter the number corresponding to your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        y = x - 5;
        break;
    case 2:
        y = sin(x);
        break;
    case 3:
        y = cos(x);
        break;
    case 4:
        y = exp(x);
        break;
    default:
        std::cout << "Invalid choice." << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "Result: y = " << y << std::endl;

    return 0;
}