#include <iostream>

bool isPerfect(int number) {
    int sum = 1;

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return (sum == number);
}


int main() {
    std::cout << "Perfect numbers between 1 and 1000 are:" << std::endl;

    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
