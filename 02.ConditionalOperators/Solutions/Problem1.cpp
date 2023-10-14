// Problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	double a, b, c;
	std::cout << "Input three numbers: \n";

	std::cin >> a >> b >> c;

	if (a < b && a < c)
	{
		std::cout << "a is the smallest \n";
	}
	else if (b < a && b < c)
	{
		std::cout << "b is the smallest \n";
	} 
	else 
	{
		std::cout << "c is the smallest \n";
	}

	return 0;
}

