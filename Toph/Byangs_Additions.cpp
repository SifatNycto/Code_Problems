#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string line;
    std::getline(std::cin, line);
    std::stringstream ss(line);

    std::string temp;
    std::vector<std::string> values;
    

    while (ss >> temp)
    {
        values.push_back(temp);
    }


    if (values.size() >= 2)
    {
        while (values[0].size() < values[1].size())
            values[0] = "0" + values[0];

        while (values[1].size() < values[0].size())
            values[1] = "0" + values[1];
    }
    


    bool contain_carry = false;
    for (size_t i = 0; i < values.size() - 1; i++)
    {
        for (int j = values[i].size() - 1; j >= 0; j--)
        {
            int digit1 = values[i][j] - '0';
            int digit2 = values[i+1][j] - '0';

            if ((digit1 + digit2) >= 10)
            {
                contain_carry = true;
                break;
            }
        }

        if (contain_carry) break;
    }

    if (contain_carry) std::cout << "Yes";
    else std::cout << "No";

    return 0;
}