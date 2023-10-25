#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

void calculateAge(int currentYear, int currentMonth, int currentDay, int birthYear, int birthMonth, int birthDay) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (birthDay > currentDay) {
       
        currentDay = currentDay + daysInMonth[birthMonth - 1];
        currentMonth = currentMonth - 1;

       if(birthMonth==2 && isLeapYear){
          currentDay += 1;
        }
    }

    if (birthMonth > currentMonth) {
        currentYear = currentYear - 1;
        currentMonth = currentMonth + 12;
    }

    int calculatedDays = currentDay - birthDay;
    int calculatedMonths = currentMonth - birthMonth;
    int calculatedYears = currentYear - birthYear;

    std::cout << "Your age:" << std::endl;
    std::cout << "Years: " << calculatedYears << " Months: " << calculatedMonths << " Days: " << calculatedDays << std::endl;
}

int main() {
    int birthYear, birthMonth, birthDay;
    int currentYear, currentMonth, currentDay;

  
    std::cout << "Enter your birthdate (YYYY MM DD): ";
    std::cin >> birthYear >> birthMonth >> birthDay;

    std::cout << "Enter the current date (YYYY MM DD): ";
    std::cin >> currentYear >> currentMonth >> currentDay;

    // Calculate and display the age
    calculateAge(currentYear, currentMonth, currentDay, birthYear, birthMonth, birthDay);

    return 0;
}
