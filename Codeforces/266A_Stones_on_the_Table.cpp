#include <iostream>
#include <string>

int main()
{
    int n;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i+1])
        {
            counter++;
        }
    }

    std::cout << counter;

    return 0;
}