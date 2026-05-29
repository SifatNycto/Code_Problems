#include <iostream>
#include <string>
#include <vector>

int main()
{
    int t;
    std::cin >> t;

    int n[t];

    std::vector<std::string> s(t);

    for(int i = 0; i < t; i++)
    {
        std::cin >> n[i];
        std::cin >> s[i];
    }

    int open;
    int close;

    for(int i = 0; i < t; i++)
    {
        open = 0;
        close = 0;

        if(n[i] % 2 != 0)
            std::cout << "NO" << std::endl;
        else
        {
            for (int j = 0; j < s[i].size(); j++)
            {
                if(s[i][j] == '(')
                    open++;
                else
                    close++;
            }
            
            if(open == close)
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        }
    }
    
    return 0;
}