#include <iostream>

int main() {
    double x, y;

    std::cout << "Enter the coordinates of the point (x, y): ";
    std::cin >> x >> y;

    int quadrant;

    if (x > 0 && y > 0) 
    {
        quadrant = 1;
    }
    else if (x < 0 && y > 0) 
    {
        quadrant = 2;
    }
    else if (x < 0 && y < 0) 
    {
        quadrant = 3;
    }
    else if (x > 0 && y < 0) 
    {
        quadrant = 4;
    }
    else
    {
        std::cout << "The point is on an axis or at the origin.";
        return 0;
    }

    std::cout << "The point is in quadrant " << quadrant << ".";

    return 0;
}
