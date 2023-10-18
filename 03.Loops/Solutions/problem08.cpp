#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++) {
        if(i % n == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
