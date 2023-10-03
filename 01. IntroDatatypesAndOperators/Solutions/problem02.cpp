#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    num = num / 10; //когато разделим променлива от тип int на 10, последната ѝ цифра се маха, 1239/10 = 123
    cout << num;
}