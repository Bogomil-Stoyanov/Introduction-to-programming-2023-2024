#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    std::cout << "Sorted numbers in ascending order: " << a << " " << b << " " << c;

    return 0;
}
