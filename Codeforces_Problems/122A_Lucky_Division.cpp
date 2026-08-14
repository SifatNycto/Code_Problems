#include <iostream>

bool div(int d[], int n);

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int d[14] = {4, 7, 44, 77, 47, 74, 444, 447, 474, 477, 777, 774, 747, 744};

    if (div(d, n)) std::cout << "YES\n";
    else std::cout << "NO\n";

    return 0;

}

bool div(int d[], int n)
{
    for (int i = 0; i < 14; i++)
    {
        if (n % d[i] == 0)
        {
            return true;
        }
    }
    return false;
}