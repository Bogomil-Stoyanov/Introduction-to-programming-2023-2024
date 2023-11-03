#include <iostream>

int main() {
    int arr[1024], num, pos, n;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::cin >> pos;

    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }

    return 0;
}
