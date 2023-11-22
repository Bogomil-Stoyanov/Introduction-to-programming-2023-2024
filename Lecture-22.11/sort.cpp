#include <algorithm>
#include <iostream>

int main()
{
    int n = 10;
    int array[] = {23, 5, -10, 0, 0, 321, 1, 2, 99, 30};
    std::sort(std::begin(array), std::end(array));
    for (int i = 0; i < n; ++i)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}
