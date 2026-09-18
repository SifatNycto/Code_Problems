#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, h;

    std::cin >> n >> h;

    int n_arr[n];
    int min_width = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> n_arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (n_arr[i] > h) min_width += 2;
        if (n_arr[i] <= h) min_width += 1;
    }

    std::cout << min_width;

    return 0;
}