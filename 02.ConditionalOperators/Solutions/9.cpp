#include <iostream>

int main()
{
    int choice;
    double temperature, convertedTemperature;

    std::cout << "Choose a conversion:" << std::endl;
    std::cout << "1. Fahrenheit to Celsius" << std::endl;
    std::cout << "2. Celsius to Fahrenheit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1)
    {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temperature;
        convertedTemperature = (temperature - 32) * 5.0 / 9.0;
        std::cout << temperature << " degrees Fahrenheit is equivalent to " << convertedTemperature << " degrees Celsius." << std::endl;
    }
    else if (choice == 2)
    {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temperature;
        convertedTemperature = (temperature * 9.0 / 5.0) + 32;
        std::cout << temperature << " degrees Celsius is equivalent to " << convertedTemperature << " degrees Fahrenheit." << std::endl;
    }
    else
    {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}