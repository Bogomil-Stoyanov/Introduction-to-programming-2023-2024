#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << pow(a-b, 4) - pow(a+b, 2); //можем да напишем и (a-b)*(a-b)*(a-b)*(a-b) за четвърта степен, просто така е по-четимо

}