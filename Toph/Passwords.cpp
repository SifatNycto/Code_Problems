#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string line;

    while (std::cin >> line)
    {
        bool has_upper = false;
        bool has_lower = false;
        bool has_number = false;

        int wordCount = 0;

        for (int i = 0; i < line.size(); i++)
        {
            if (std::isupper(line[i])) has_upper = true;
            
            else if (std::islower(line[i])) has_lower = true;
            
            if (std::isdigit(line[i])) has_number = true;

            if (has_upper && has_lower && has_number)
            {
                wordCount++;

                has_upper = false;
                has_lower = false;
                has_number = false;
            }
        }

        std::cout << wordCount << "\n";
    }

    return 0;
}