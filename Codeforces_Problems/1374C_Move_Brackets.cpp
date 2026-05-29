#include <iostream>
#include <string>
#include <vector>

int main()
{
    int t;
    std::cin >> t;

    int n[t];
    std::vector<std::string> s(t);

    for (int i = 0; i < t; i++)
    {
        std::cin >> n[i];
        std::cin >> s[i];
    }

    int counter;
    int moves;
    for (int i = 0; i < t; i++)
    {
        counter = 0;
        moves = 0;
        for (int j = 0; j < s[i].size(); j++)
        {
            if (s[i][j] == '(')
                counter++;
            if (s[i][j] == ')')
                counter--;

            if (counter < 0)
                moves++, counter = 0;
        }

        std::cout << moves << std::endl;
    }

    return 0;
}