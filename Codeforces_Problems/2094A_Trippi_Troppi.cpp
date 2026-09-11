#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    std::cin.ignore();

    std::vector<std::string> modern(t);

    for (int i = 0; i < t; i++)
    {
        std::string old, split;

        std::getline(std::cin, old);
        std::stringstream ss(old);

        while (ss >> split)
        {
            modern[i] += split[0];
        }
    }

    for (int i = 0; i < t; i++)
    {
        std::cout << modern[i] << "\n";
    }

    return 0;