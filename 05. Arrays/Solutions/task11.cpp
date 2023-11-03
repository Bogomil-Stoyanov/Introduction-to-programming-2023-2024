#include <iostream>

int main() {
    int arr[1024], n, lastElem;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    lastElem = arr[n-1];
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = lastElem;

    for(int i = 0; i < n; i++){
        std::cout << arr[i];
    }

    return 0;
}
