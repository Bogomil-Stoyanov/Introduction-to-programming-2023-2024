#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num; //123
    cout << num % 10; //3
    num /= 10;
    cout << num % 10; //2
    num /= 10;
    cout << num % 10; //1

    //за тази задача има още много начини, така изкарваме цифрите на числото една по една

}