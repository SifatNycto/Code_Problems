#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    int rest = 240 - k;
    int total = 0;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        total += (5*i);
        
        if (total > rest)
            break;

        count++;
    }
    
    std::cout << count;

    return 0;
}