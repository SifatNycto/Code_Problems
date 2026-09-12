#include <iostream>
#include <cctype>
#include <string>

// int main()
// {
//     std::string a, b;

//     std::cin >> a >> b;

//     for (char &aa : a)
//         aa = tolower(aa);
    
//     for (char &bb : b)
//         bb = tolower(bb);
    

//     if (a > b) std::cout << 1;
//     else if (a < b) std::cout << -1;
//     else std::cout << 0;

//     return 0;
// }




int main()
{
    std::string str_1st, str_2nd;
    std::cin >> str_1st >> str_2nd;

    for (char &a : str_1st) a = tolower(a);
    for (char &b : str_2nd) b = tolower(b);

    if (str_1st < str_2nd) std::cout << -1;
    else if (str_1st > str_2nd) std::cout << 1;
    else std::cout << 0;

    return 0;
}