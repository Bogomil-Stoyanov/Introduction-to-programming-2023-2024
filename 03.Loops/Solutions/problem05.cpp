#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0, num;
    for(int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }
    cout << "Average: " << sum/n << endl;
    return 0;
}
