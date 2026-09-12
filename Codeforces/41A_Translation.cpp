#include <iostream>
#include <string>
#include <algorithm>

#define all(x) (x).begin(), (x).end()

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s, t;
    std::cin >> s >> t;

    std::reverse(all(s));

    if (t == s) std::cout << "YES\n";
    else std::cout << "NO\n";

    return 0;
}