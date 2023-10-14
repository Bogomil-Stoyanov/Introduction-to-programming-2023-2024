#include <iostream>

int main() {
    double balance, withdraw;

    std::cout << "Enter your current account balance: ";
    std::cin >> balance;

    std::cout << "Enter the amount to withdraw: ";
    std::cin >> withdraw;

    if (balance >= withdraw) {

        balance -= withdraw;
        std::cout << "You have successfully withdrawn " << withdraw << ". Your new balance is " 
            << balance << ".";
    }
    else {
        std::cout << "Error: Unable to withdraw money. Please check your balance and withdrawal amount." ;
    }

    return 0;
}
