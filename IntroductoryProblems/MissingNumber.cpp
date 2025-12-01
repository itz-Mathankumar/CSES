#include<iostream>

int main()
{
    long n;
    std::cin >> n;
    long arr[n-1];
    long sum = 0;
    
    for (int i = 0; i < n-1; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << ((n * (n + 1)) / 2) - sum;

    return 0;
}
