#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testcase;
    std::cin >> testcase;

    int n = 0;
    while (testcase--)
    {
        std::string lines;
        std::cin >> lines;

        int ones = 0;

        if (lines.size() >= 3 && lines[0] == '1' && lines[lines.size()-1] == '1')
        {
            for (int i = 0; i < lines.size(); i++)
            {
                if (lines[i] == '1') ones++;
            }

            n++;

            std::cout << "Case " << n << ": " << ones-1 << "\n";
        }
    }

    return 0;
}