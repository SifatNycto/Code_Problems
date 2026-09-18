#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n;
    std::cin >> n;

    if (n % 2 != 0)
    {
        n = (n+1) / 2;
        if (n < 0) std::cout << n;
        else std::cout << "-" << std::to_string(n);
    }

    else std::cout << n/2;

    return 0;
}