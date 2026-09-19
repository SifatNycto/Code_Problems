#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    std::string s[n];
    int magnetParts = 1;

    for (int i = 0; i < n; i++)
        std::cin >> s[i];

    for (int i = 0; i < (n-1); i++)
        if (s[i] != s[i+1]) magnetParts++;

    std::cout << magnetParts;

    return 0;
}

// 01 +-
// 10 -+