// Problem3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int grade;

    std::cout << "Въведете оценка: \n";
    std::cin >> grade;

    if (grade >= 90 && grade <= 100)
    {
        std::cout << "6: \"Отлично! Продължавайте в същия дух.\"";
    } 
    if (grade >= 80 && grade <= 90)
    {
        std::cout << "5: \"Добра работа! Справяш се добре.\"";
    }
    if (grade >= 70 && grade <= 79)
    {
        std::cout << "4: \"Вие преминахте, но има място за подобрение.\"";
    }
    if (grade >= 60 && grade <= 69)
    {
        std::cout << "3: \"Трябва да работиш повече.\"";
    }
    if (grade < 60)
    {
        std::cout << "2: \"Ще трябва да се видим септември, колега :(\"";
    }

    return 0;
}

