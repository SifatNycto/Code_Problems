#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    std::string str;
    std::cin >> str;

    int n = 0, s = 0, u = 0;

    for (int i = 0; i < N; i++)
    {
        if (str[i] == 'N') n++;
        if (str[i] == 'S') s++;
        if (str[i] == 'U') u++;
    }

    if (n < s && n < u) std::cout << n;
    else if (s < n && s < u) std::cout << s;
    else std::cout << u;

    return 0;
}