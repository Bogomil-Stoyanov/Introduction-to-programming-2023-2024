#include <iostream>

void primeFactors(int n) {
    while (n % 2 == 0) {
        std::cout << 2 << " ";
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            std::cout << i << " ";
            n /= i;
        }
    }
  
    if (n > 2) {
        std::cout << n << " ";
    }
}

int main() {
    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 2) {
        std::cout << "Prime factors are not defined for numbers less than 2." << std::endl;
    } else {
        std::cout << "Prime factors of " << number << " are: ";
        primeFactors(number);
        std::cout << std::endl;
    }

    return 0;
}
