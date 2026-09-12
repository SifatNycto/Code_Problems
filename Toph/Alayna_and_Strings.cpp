#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string line;
    std::cin >> line;

    int upper = 0;
    int lower = 0;
    for (int i = 0; i < line.size(); i++)
    {
        if (std::isupper(line[i])) upper++;
        if (std::islower(line[i])) lower++;
    }

    std::cout << upper << " " << lower;

    return 0;
}