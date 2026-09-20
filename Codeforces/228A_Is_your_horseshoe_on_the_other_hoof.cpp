#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a[4];
    int track = 0;

    for (int i = 0; i < 4; i++)
        std::cin >> a[i];


    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (a[i] == a[j])
            {
                track++;
                break;
            }
        }
    }

    std::cout << track;

    return 0;
}