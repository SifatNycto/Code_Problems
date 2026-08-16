#include <iostream>
#include <algorithm>
#include <utility>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    int input[t];
    int output[t];
    
    for (int i = 0; i < t; i++)
    {
        std::cin >> input[i];

        output[i] = input[i];
    }

    for (int c : output)
        std::cout << c << "\n";

    return 0;
}