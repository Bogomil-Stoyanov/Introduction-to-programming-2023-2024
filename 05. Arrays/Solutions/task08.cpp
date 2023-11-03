#include <iostream>

int main() {
    int arr[1024], n;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                std::cout << arr[i] << " ";
                break;
            }
        }
    }


    return 0;
}
