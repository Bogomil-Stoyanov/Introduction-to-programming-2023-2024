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

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                std::swap(a[j], a[j + 1]);
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
    bubbleSort(arr, n);
    std::cout << "Sorted array :\n";
    printArray(arr, n);
    return 0;
}