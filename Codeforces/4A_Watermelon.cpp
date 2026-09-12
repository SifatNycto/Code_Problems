#include <iostream>

// int main()
// {
//     int w;
//     std::cin >> w;
//     if (w > 3 && w % 2 == 0) std::cout << "YES";
//     else std::cout << "NO";
//     retn 0;
// }



int main(void)
{
    int w;
    std::cin >> w;

    if ((w % 2 == 0) && w >= 4) std::cout << "YES";
    else std::cout << "NO";

}