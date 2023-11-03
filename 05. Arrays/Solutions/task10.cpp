#include <iostream>

int main() {
    int arr[1024], n;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) arr[i] = 0;
        std::cout << arr[i] << " ";
    }

    return 0;
}
