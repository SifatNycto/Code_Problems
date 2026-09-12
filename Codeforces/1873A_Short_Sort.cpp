#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;

    std::string s[6];

    for (int i = 0; i < t; i++)
    {
        std::cin >> s[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (s[i] == "abc" || 
            s[i] == "bac" ||
            s[i] == "cba" || 
            s[i] == "acb") std::cout << std::endl << "YES";

        else
        std::cout << std::endl << "NO";
    }

    return 0;
}