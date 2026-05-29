#include <iostream>
#include <string>
#include <vector>

int main()
{
    int n, t;
    std::cin >> n >> t;

    std::string s;
    std::cin >> s;

    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == 'B' && s[j+1] == 'G')
            {
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                
                j++;
            }
        }
    }

    std::cout << s;
}