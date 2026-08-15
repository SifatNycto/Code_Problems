#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
            std::cout << " ";

        for (int j = 1; j <= i; j++)
        {
            if (j == 1) std::cout << "*";
            else std::cout << " *";
        }

        std::cout << "\n";
    }

    return 0;
}