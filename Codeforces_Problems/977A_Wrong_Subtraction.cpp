#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        if (n % 10 != 0) n -= 1;

        else n /= 10;
    }

    std::cout << n;

    return 0;
}