#include <iostream>

int main() {
    int arr[1024], num, pos, n;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::cout << "Enter the number you want to insert and the position: ";
    std::cin >> num >> pos;
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = num;

    return 0;
}
