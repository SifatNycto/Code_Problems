#include <iostream>
#include <string>
#include <cctype>
#include <vector>

int main()
{
    int t;
    std::cin >> t;

    std::string number[t];

    int n[t];
    int k[t];
 


    for (int j = 0; j < t; j++)
    {
        std::cin >> n[j] >> k[j];

        std::string number[n[j]];

        for (int i = 0; i < n[j]; i++)
        {
            std::cin >> number[i];
        }
        
      

    }

    return 0;
}