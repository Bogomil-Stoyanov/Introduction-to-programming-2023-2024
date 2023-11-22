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

void quickSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int pivot = arr[(left + right) / 2];
    int i = left;
    int j = right;
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    quickSort(arr, left, j);
    quickSort(arr, i, right);
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
    quickSort(arr, 0, n - 1);
    std::cout << "Sorted array :\n";
    printArray(arr, n);
    return 0;
}