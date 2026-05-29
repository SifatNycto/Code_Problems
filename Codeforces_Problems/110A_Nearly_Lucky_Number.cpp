#include <iostream>

int main()
{
    std::string n;
    std::cin >> n;

    int luckyCounter = 0;

    for (int i = 0; i < n.size(); i++)
        if (n[i] == '4' || n[i] == '7') luckyCounter++;


    if (luckyCounter == 4 || luckyCounter == 7)
        std::cout << "YES" << std::endl;

    else
        std::cout << "NO" << std::endl;

    return 0;
}

/*
if inputs have 4 and 7 then how many 4's and 7's then total counts
should be 4 or 7 to be luky
*/