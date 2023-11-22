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

void randomShuffle(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::swap(arr[i], arr[rand() % n]);
}

void bogoSort(int arr[], int n)
{
    while (isSorted(arr, n) == false)
        randomShuffle(arr, n);
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
    bogoSort(arr, n);
    std::cout << "Sorted array :\n";
    printArray(arr, n);
    return 0;
}