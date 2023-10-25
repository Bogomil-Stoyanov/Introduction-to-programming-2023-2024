#include <iostream>

bool hasRightToVote(int age) {
    return (age >= 18);
}

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (hasRightToVote(age)) {
        std::cout << "You have the right to vote." << std::endl;
    } else {
        std::cout << "You do not have the right to vote." << std::endl;
    }

    return 0;
}
