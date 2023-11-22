#include <iostream>

bool isSorted(int a[], int n)
{
    while (--n >= 1)
    {
        if (a[n] < a[n - 1])
            return false;
    }
    return true;
}

void bozoSort(int arr[], int n)
{
    while (isSorted(arr, n) == false)
    {
        int a = rand() % n;
        int b = rand() % n;
        std::swap(arr[a], arr[b]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

int main()
{
    int arr[] = {3, 2, 5, 1, 0, 4, 6, 7, 9, 8};
    int n = 10;
    bozoSort(arr, n);
    std::cout << "Sorted array :\n";
    printArray(arr, n);
    return 0;
}