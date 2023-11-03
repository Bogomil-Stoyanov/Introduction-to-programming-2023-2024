#include <iostream>

int main() {
    int arr1[1024], arr2[1024], n, m;
    bool areEqual = true;
    std::cout << "Input the first array: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> arr1[i];
    }

    std::cout << "Input the second array: ";
    std::cin >> m;
    for(int i = 0; i < m; i++){
        std::cin >> arr2[i];
    }

    if(n != m) {
        std::cout << "Not Equal";
        return 0;
    }

    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            areEqual = false;
            break;
        }
    }
    std::cout << (areEqual ? "Equal" : "Not Equal"); //тернарен оператор

    return 0;
}
