#include <iostream>
using namespace std;

int main(){
     char letter;
     cin >> letter; //малките букви имат стойности между 97 и 122 в ASCII таблицата
     cout << letter - 32; //големите букви са с 32 назад в таблицата, можем да изваждаме и добавяме числа на char символите
}