#include <iostream>

int main() {
    int arr[1024], temp, n;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> n;
    }

    for(int i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    return 0;
}
