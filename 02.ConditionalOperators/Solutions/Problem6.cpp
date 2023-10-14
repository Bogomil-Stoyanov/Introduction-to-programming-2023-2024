#include <iostream>

int main() {
    double a, b, c;

    std::cout << "Enter the lengths of the sides of the triangle (a, b, c): ";
    std::cin >> a >> b >> c;


    if (a + b > c && a + c > b && b + c > a) 
    {
        // Равностранен триъгълник
        if (a == b && b == c) 
        {
            std::cout << "The triangle has 3 sides of equal length.";
        }
        // Равнобедрен триъгълник
        else if (a == b || a == c || b == c) 
        {
            std::cout << "The triangle has 2 sides of equal length.";
        }
        // Ако не е равностранен или равнобедрен -> триъгълникът е разностранен
        else 
        {
            std::cout << "The triangle has no sides of equal length.";
        }
    }
    else
    {
        std::cout << "No triangle with the given side lengths exists.";
    }

    return 0;
}
