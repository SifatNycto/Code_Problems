#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T;
    std::cin >> T;

    int total_1 = 0;
    int total_10 = 0;
    int total_100 = 0;

    for (int i = 0; i < T; i++)
    {
        int A_i, rem = 0, change = 0;
        std::cin >> A_i;

        rem = A_i % 1000;

        if (rem != 0) change = 1000 - rem;
        else change = 0;

        total_1 += change % 10;
        total_10 += (change % 100) / 10;
        total_100 += change / 100;
    }

    std::cout << total_1 << " " << total_10 << " " << total_100;

    return 0;
}