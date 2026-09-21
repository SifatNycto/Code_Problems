#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    long long a, b, c;
    long long final_score[t];

    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b >> c;

        if ((b-a) > ((a+c) - b))
            final_score[i] = std::llabs(b - a);
        else
            final_score[i] = std::llabs((a+c) - b);
        
    }

    for (long long i : final_score)
        std::cout << i << "\n";

    return 0;
}