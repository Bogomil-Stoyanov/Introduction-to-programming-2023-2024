#include <iostream>

int main() {
    int arr[1024], count = 0, num, n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::cout << "Enter the number you're looking for: ";
    std::cin >> num;
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) count++;
    }
    std::cout << count;

    return 0;
}
