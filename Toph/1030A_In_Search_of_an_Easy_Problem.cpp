#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int line[n];

    bool isHard = false;
    for (int i = 0; i < n; i++)
    {
        std::cin >> line[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (line[i] == 1) isHard = true;
    }

    if (isHard) std::cout << "HARD";
    else std::cout << "EASY";

    return 0;
}