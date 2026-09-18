#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, p, q, freeRooms = 0;
    std::cin >> n;

    while (n--)
    {
        std::cin >> p >> q;
        if (q - p >= 2)
            freeRooms++;
    }

    std::cout << freeRooms;

    return 0;
}