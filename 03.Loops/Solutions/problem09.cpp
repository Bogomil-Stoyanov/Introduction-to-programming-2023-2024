#include<iostream>
using namespace std;

int main() {
    int n, m;
    int result = 1;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        result *= n;
    }
    cout << "Result: " << result << endl;
    return 0;
}
