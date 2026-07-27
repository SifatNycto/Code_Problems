#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;

    std::string s[t];

    for (int i = 0; i < t; i++)
    {
        std::cin >> s[i];
    }

    for (int i = 0; i < t; i++)
    {
        for (char &c : s[i]) c = toupper(c);

        if (s[i] == "YES") std::cout << "YES" << std::endl;
        
        else std::cout << "NO" << std::endl;
    }

    return 0;
}