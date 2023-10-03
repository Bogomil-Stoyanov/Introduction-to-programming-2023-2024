#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    bool firstIsBigger = num1 > num2; //булев тип, връща стойности true/false, true обикновено е 1 като число, false e 0
    cout << firstIsBigger;

    cout << (num1 > num2); //алтернативен начин

}