#include <iostream>
#include <string>

// int main()
// {
//     int n, X = 0;
//     std::string in;

//     std::cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> in;

//         if (in.find("++") != std::string::npos)
//             X++;
//         else
//             X--;
//     }

//     std::cout << X;

//     return 0;
// }




int main()
{
    int n, X = 0;
    std::string in;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> in;

        if (in.find("++") != std::string::npos) X++;
        else X--;
    }

    std::cout << X;

    return 0;
}