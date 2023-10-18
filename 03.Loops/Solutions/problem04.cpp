#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        if(i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
