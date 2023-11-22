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

bool sortingDesc(int a, int b)
{
    return a > b;
}

bool sortingAsc(int a, int b)
{
    return a < b;
}

bool sortingByDigitSum(int a, int b)
{
    int sumA = 0;
    int sumB = 0;
    while (a > 0)
    {
        sumA += a % 10;
        a /= 10;
    }
    while (b > 0)
    {
        sumB += b % 10;
        b /= 10;
    }
    return sumA < sumB;
}

void bubbleSort(int a[], int n, bool (*sorting)(int, int))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (!sorting(a[j], a[j + 1]))
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
    int arr[] = {99, 10, 101, 5, 1, 0, 4, 6, 7, 9, 8};
    int n = 10;
    bubbleSort(arr, n, sortingByDigitSum);
    std::cout << "Sorted array :\n";
    printArray(arr, n);
    return 0;
}