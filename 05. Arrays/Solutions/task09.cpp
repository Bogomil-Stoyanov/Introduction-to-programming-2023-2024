#include <iostream>

int main() {
    int arr[1024], n, product = 1;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    for(int i = 1; i < n; i += 2) {
        product *= arr[i];
    }
    std::cout << product;

    return 0;
}
