#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2; //въвеждат се координатите на двете точки

    cout << (pow(x1 - x2, 2) + pow(y1 - y2, 2)); //pow(a, b) - повдигаме числото a на степен b
}