#include <bits/stdc++.h>
#include <string>

// int main()
// {
//     int n;
//     std::cin >> n;

//     while (n--)
//     {
//         std::cout << std::endl;
//         std::string word;
//         std::cin >> word;

//         int length = word.size();

//         if (length > 10) std::cout << word[0] << (length - 2) << word[length - 1];
//         else std::cout << word;
//     }
//     return 0;
// }



// int main()
// {
//     int n;
//     std::cin >> n;
//     std::vector<std::string> word(n);
    

//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> word[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int length = word[i].size();
        
//         char first = word[i][0];
//         char last = word[i][length - 1];

//         if (length > 10)
//         {
//             std::cout << first << (length - 2) << last;
//         }
//         else std::cout << word[i];

//         std::cout << std::endl;
//     }

//     return 0;
// }





int main()
{
    int n;
    std::cin >> n;
    std::string word[n];
    

    for (int i = 0; i < n; i++)
    {
        std::cin >> word[i];
    }

    for (int i = 0; i < n; i++)
    {
        int length = word[i].size();
        
        char first = word[i][0];
        char last = word[i][length - 1];

        if (length > 10)
        {
            std::cout << first << (length - 2) << last;
        }
        else std::cout << word[i];

        std::cout << std::endl;
    }

    return 0;
}


