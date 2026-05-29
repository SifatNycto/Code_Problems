#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string word;
    std::cin >> word;

    if (std::islower(word[0]))
        word[0] = std::toupper(word[0]);
    
    std::cout << word;
    
    return 0;
}