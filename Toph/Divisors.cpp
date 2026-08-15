#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int A;
    std::cin >> A;

    for (int i = 1; i <= A; i++)
    {
        if (A % i == 0) std::cout << i << "\n";
    }

    return 0;
}