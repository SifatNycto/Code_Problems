#include <iostream>
#include <string>

bool isDist(std::string x);
int main()
{
    int y;
    std::cin >> y;
    
    while (true)
    {
        y++;
        
        std::string x = std::to_string(y);
        
        if (isDist(x) == true) break;
    }

    std::cout << y;

    return 0;
}

bool isDist(std::string x)
{
    std::string seen = "";

    for (char c : x)
    {
        if (seen.find(c) != std::string::npos) // not dist
        {
            return false;
        }
        
        seen.push_back(c);
    }
    
    return true; // dist
}