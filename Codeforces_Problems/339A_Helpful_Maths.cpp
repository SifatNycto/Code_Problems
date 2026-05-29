#include <iostream>
#include <string>

int main()
{
    std::string s1;
    std::cin >> s1;

    int size_s = s1.size();

    std::string s2;

    for(int i = 0; i < size_s; i++)
    {
        if(s1[i] != '+') s2.push_back(s1[i]);
    }

    for(int i = 0; i < s2.size() - 1; i++)
    {
        for(int j = 0; j < s2.size() - 1 - i; j++)
        {
            if(s2[j] > s2[j+1])
            {
                char tmp = s2[j];
                s2[j] = s2[j+1];
                s2[j+1] = tmp;
            }
        }
    }

    s1.clear();

    for (int i = 0; i < s2.size(); i++)
    {
        s1.push_back(s2[i]);

        if(i != s2.size() - 1) s1.push_back('+');
    }

    std::cout << s1 << std::endl;

    return 0;
}





// #include <algorithm>

// int main()
// {
//     std::string s;
//     std::cin >> s;

//     std::string nums;

//     for(char c : s)
//     {
//         if(c != '+')
//             nums += c;
//     }

//     sort(nums.begin(), nums.end());

//     for(int i = 0; i < nums.size(); i++)
//     {
//         std::cout << nums[i];

//         if(i != nums.size() - 1)
//             std::cout << '+';
//     }

//     return 0;
// }