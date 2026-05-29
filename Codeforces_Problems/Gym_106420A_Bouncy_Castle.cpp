#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    int t = 0;

    while (pow(t, 2) <= 2 * n)
    {
        t++;
    }

    std::cout << t - 1;

    return 0;
}