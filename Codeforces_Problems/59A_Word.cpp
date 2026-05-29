#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string word;
    std::cin >> word;
    int lower_count = 0;
    int upper_count = 0;
    int length = word.length();

    for (int i = 0; i < length; i++)
    {
        if (std::islower(word[i]))
            lower_count++;
    }
    upper_count = length - lower_count;

    if (lower_count >= upper_count)
        for (char &c : word)
            c = std::tolower(c);
    
    else
        for (char &c : word)
            c = std::toupper(c);

    std::cout << word;

    return 0;
}