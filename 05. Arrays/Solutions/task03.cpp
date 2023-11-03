#include <iostream>

int main() {
    int arr[1024], sum = 0;
    double mean;
    int n;

    std::cin >> n;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    mean = (double)sum / n;
    std::cout << mean;

    return 0;
}
