#include <iostream>
using namespace std;

int main(){
    double const PI = 3.14159; //декларираме PI като константа (const), тъй като няма да променяме стойността му, има и други начини да използваме пи, може да си погледнете
    double radius;
    cin >> radius;
    cout << "perimeter: " << 2 * PI * radius << endl;
    cout << "area: " << PI * radius * radius;
}