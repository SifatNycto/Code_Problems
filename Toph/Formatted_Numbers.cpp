#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string str_1;
    std::string str_2 = "";
    int count = 0;

    std::cin >> str_1;

    for (int i = (str_1.size() - 1); i >= 0; i--)
    {
        str_2.push_back(str_1[i]);
        count++;

        if (count == 3 && i > 0)
        {
            str_2.push_back(',');
            count = 0;
        }
    }

    std::reverse(str_2.begin(), str_2.end());

    std::cout << str_2;

    return 0;
}