#include <iostream>

int main()
{
    long n, moves = 0;
    std::cin >> n;

    long arr[n];
    for (long i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (long i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            moves += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    std::cout << moves;
}
