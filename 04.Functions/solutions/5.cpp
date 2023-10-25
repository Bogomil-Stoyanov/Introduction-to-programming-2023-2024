#include <iostream>

bool isEven(int number) {
    return (number % 2 == 0);
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isEven(number)) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}
