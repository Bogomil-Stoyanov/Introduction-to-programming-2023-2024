#include <iostream>

int main() {
    int arr[1024], count = 0, n;

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) count++;
    }
    std::cout << count;

    return 0;
}
