#include <iostream>

int main() {
    int arr[1024], max_val, min_val, n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    max_val = min_val = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max_val) max_val = arr[i];
        if(arr[i] < min_val) min_val = arr[i];
    }
    std::cout << "Max: " << max_val << ", Min: " << min_val;

    return 0;
}
