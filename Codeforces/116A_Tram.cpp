#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int a, b;
    int current_number = 0;
    int final_max = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        
        current_number -= a;
        current_number += b;

        if (current_number > final_max)
            final_max = current_number;
    }

    std::cout << final_max;

    return 0;
}