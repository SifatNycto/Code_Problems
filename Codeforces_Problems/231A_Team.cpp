#include <iostream>

// int main()
// {
//     int n, a, b, c, problem = 0;

//     std::cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> a >> b >> c;

//         if ((a+b+c) >= 2)
//             problem++;
//     }

//     std::cout << problem;

//     return 0;
// }





int main()
{
    int n, x, y, z, problems = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
        {
            std::cin >> x >> y >> z;

            if ((x+y+z) >= 2) problems++;
        }
    std::cout << problems;

    return 0;
}