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

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && a[j] < a[j - 1])
        {
            std::swap(a[j], a[j - 1]);
            j--;
        }
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
    insertionSort(arr, n);
    std::cout << "Sorted array :\n";
    printArray(arr, n);
    return 0;
}