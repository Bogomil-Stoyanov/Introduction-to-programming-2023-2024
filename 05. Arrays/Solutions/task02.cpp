#include <iostream>

int main() {
    int arr[10], sum = 0;

    for(int i = 0; i < 10; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << sum;

    return 0;
}
