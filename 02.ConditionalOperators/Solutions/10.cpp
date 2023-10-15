#include <iostream>

int main()
{
    int age, time;
    double ticketPrice;

    // Input age and time
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter the time of the movie (in 24-hour format): ";
    std::cin >> time;

    // Calculate ticket price based on age and time
    if (age >= 0 && age <= 12)
    {
        if (time < 1700)
        { // Before 5:00 PM
            ticketPrice = 9.0;
        }
        else
        { // Evening performance
            ticketPrice = 14.0;
        }
    }
    else if (age >= 13 && age <= 64)
    {
        if (time < 1700)
        {
            ticketPrice = 13.0;
        }
        else
        {
            ticketPrice = 15.0;
        }
    }
    else if (age >= 65)
    {
        if (time < 1700)
        {
            ticketPrice = 10.0;
        }
        else
        {
            ticketPrice = 13.0;
        }
    }
    else
    {
        std::cout << "Invalid age." << std::endl;
        return 1; // Exit with an error code
    }

    // Display the calculated ticket price
    std::cout << "The ticket price is: BGN " << ticketPrice << std::endl;

    return 0;
}