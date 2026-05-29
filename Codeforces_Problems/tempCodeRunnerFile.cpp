#include <iostream>

int main()
{
    std::string n;
    std::cin >> n;

    int totalDigits = n.size();
    int luckyCounter = 0;
    bool luckyAbsent = false;

    for (int i = 0; i < totalDigits; i++)
    {
        if (n[i] == '4' || n[i] == '7') luckyCounter++;
            
        else luckyAbsent = true;
    }

    if (luckyAbsent || (luckyCounter < totalDigits) || totalDigits == 1)
        std::cout << "NO" << std::endl;

    else if ((luckyCounter == totalDigits))
        std::cout << "YES" << std::endl;

    return 0;
}