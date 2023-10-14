// Problem4.cpp : This file contains the 'main' function. Program eaecution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    int a, b;

    std::cin >> a;

	if (a >= 1)
	{
		b = log(a) / log(10) + 1.82;
	}
	else
	{
		b = a * a + 7 * a + 8.82;
	}

	std::cout << b;

	return 0;
}
