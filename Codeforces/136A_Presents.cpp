#include <iostream>
#include <utility>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    int a[n+1];
    int b[n+1];

    for (int i = 1; i <= n; i++)
    {
        std::cin >> a[i];
        b[a[i]] = i;
    }

    for (int i = 1; i <= n; i++)
        std::cout << b[i] << " ";
    
    
    return 0;
}