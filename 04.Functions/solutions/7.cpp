#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    
    if (number == 2) {
        return true;
    }

    if (number % 2 == 0) {
        return false;
    }

    // Check for divisors from 3 to the square root of the number
    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
