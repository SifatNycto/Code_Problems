#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string user_name;
    std::cin >> user_name;

    std::string result = "";

    for (char &u : user_name)
        u = tolower(u);

    for (char u : user_name)
    {
        if (result.find(u) == std::string::npos)
            result += u;
    }

    int size = result.length();

    if (size % 2 == 0)
        std::cout << "CHAT WITH HER!";
    else
        std::cout << "IGNORE HIM!";
    
    return 0;
}