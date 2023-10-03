#include <iostream>
using namespace std;

int main(){
   int num;
   cin >> num;
   bool isValidGrade = (num >= 2) && (num <= 6); //&& - логическо И, тоест искаме числото да бъде между 2 и 6 (включително)
   cout << isValidGrade;

   //алтернативно може отново да бъде изведено на конзолата директно, без допълнителна булева променлива
}