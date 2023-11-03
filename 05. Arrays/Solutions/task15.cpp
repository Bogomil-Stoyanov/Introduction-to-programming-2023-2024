#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr1[n], arr2[n], arr3[n];

    std::cout << "Enter elements for the first array: ";
    for(int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter elements for the second array: ";
    for(int i = 0; i < n; i++) {
        std::cin >> arr2[i];
    }

    for(int i = 0; i < n; i++) {
        arr3[i] = arr1[i] * arr2[i];
    }

    std::cout << "Elements of the new array: ";
    for(int i = 0; i < n; i++) {
        std::cout << arr3[i] << " ";
    }

    return 0;
}
