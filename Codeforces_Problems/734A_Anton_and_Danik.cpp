#include <iostream>
#include <string>
#include <vector>

int main()
{
    int n;
    std::cin >>n;

    std::string match;
    std::cin >> match;

    int countA = 0;
    int countD = 0;

    for(char c : match)
    {
        if(c == 'A') countA++;
        if(c == 'D') countD++;
    }

    if(countA > countD) std::cout << "Anton";
    else if(countA < countD) std::cout << "Danik";
    else std::cout << "Friendship";

    return 0;
}