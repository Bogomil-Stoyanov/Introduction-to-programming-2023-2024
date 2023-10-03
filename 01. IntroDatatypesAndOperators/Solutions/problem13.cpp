#include <iostream>
using namespace std;

int main(){
    char letter;
    cin >> letter;
    bool isVowel = letter == 'a' || letter == 'e' || letter == 'u' || letter == 'y' || letter == 'i' || letter == 'o';
    //можем да сравняваме char с число, тоест числото от ASCII таблицата, което отговаря на символа, можем и директно със символа (char)
    //аналогично трябва да изпишем и гласните букви, просто ме домързя
    cout << isVowel;
}
