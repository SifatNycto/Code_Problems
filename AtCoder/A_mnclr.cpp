#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string S1, S2;
    std::cin >> S1;

    for (int i = 0; i < S1.size(); i++)
    {
        S2.push_back(S1[i]);
        if (i == S1.size() - 1) break;
        S2.push_back('o');
    }

    std::cout << S2;

    return 0;
}