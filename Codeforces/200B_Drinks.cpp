#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    int p[n];
    double volume = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> p[i];
        volume += p[i];
    }

    std::cout << volume / n;

    return 0;
}