#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int x[n], y[n], z[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> x[i];
        std::cin >> y[i];
        std::cin >> z[i];
    }

    int xx = 0, yy = 0, zz = 0;

    for (int i = 0; i < n; i++)
    {
        xx += x[i];
        yy += y[i];
        zz += z[i];
    }


    if (xx == 0 && yy == 0 && zz == 0)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}








// #include <iostream>
// #include <string>

// int main()
// {
//     int n;
//     std::cin >> n;

//     int xx = 0, yy = 0, zz = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int x, y, z;

//         std::cin >> x >> y >> z;


//         xx += x;
//         yy += y;
//         zz += z;
//     }


//     if (xx == 0 && yy == 0 && zz == 0)
//         std::cout << "YES";
//     else
//         std::cout << "NO";

//     return 0;
// }