#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int firstDigit = num % 10; //броя цифрите от дясно на ляво - 1234 % 10 = 4
    num = num / 10; //делим числото на 10, за да може да изведем следващата му цифра с деление по модул - 1234 / 10 = 123
    int secondDigit = num % 10; //123 % 10 = 3
    num /= 10; //друг начин да изпишем делението, 123/10 = 12
    int thirdDigit = num % 10; //12 % 10 = 2
    num /= 10; //12/10 = 1, на практика оставаме с последната му цифра
    int fourthDigit = num;

    cout << firstDigit + secondDigit + thirdDigit + fourthDigit;

}