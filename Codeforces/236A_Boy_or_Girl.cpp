// #include <iostream>
// #include <string>
// #include <cctype>

// int main()
// {
//     std::string user_name;
//     std::cin >> user_name;

//     std::string result = "";

//     for (char &u : user_name)
//         u = tolower(u);

//     for (char u : user_name)
//     {
//         if (result.find(u) == std::string::npos)
//             result += u;
//     }

//     int size = result.length();

//     if (size % 2 == 0)
//         std::cout << "CHAT WITH HER!";
//     else
//         std::cout << "IGNORE HIM!";
    
//     return 0;
// }


// updated method
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     string username;
//     cin >> username;

//     set<char> uniqueCharacters;

//     for (char c : username)
//         uniqueCharacters.insert(c);
    
//     if (uniqueCharacters.size() % 2 == 0)
//         cout << "CHAT WITH HER!\n";
//     else
//         cout << "IGNORE HIM!\n";
    
//     return 0;
// }


int main()
{
    string username;
    cin >> username;

    bool seen[26] = {};
    int distinct = 0;

    for (char c : username)
    {
        int index = c - 'a';

        if (!seen[index])
        {
            seen[index] = true;
            distinct++;
        }
    }
    
    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
    
    return 0;
}