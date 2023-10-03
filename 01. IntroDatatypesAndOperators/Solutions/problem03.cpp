#include <iostream>
using namespace std;

int main(){
    int firstNum, secondNum; //можем да декларираме няколко променливи една след друга, изредени със запетайка
    cin >> firstNum >> secondNum; //вземаме стойността им от конзолата, отново можем да изреждаме променливи
    int sum = firstNum + secondNum; //създаваме си променлива за сбора
    cout << sum << endl; //endl - нов ред
    cout << firstNum - secondNum << endl; //директно извеждаме разликата, без допълнителна променлива (и двата начина са валидни)
    cout << firstNum * secondNum << endl;
    cout << firstNum / secondNum << endl;
    cout << firstNum % secondNum << endl; //деление по модул, връща се остатъкът при деление на двете числа


}