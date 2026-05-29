#include <iostream>
#include <algorithm>
// n friends
// k drinks
// l mili water
// c lemons
// d pieces on each lemon
// p grams of salts
// nl
// np

// int main()
// {
//     int n, k, l, c, d, p, nl, np;
//     std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
//     int drinks = k * l;
//     int toasts = drinks / nl;
//     int limeSlice = c * d;
//     int salt_for_toasts = p / np;

//     int min = 0;

//     // if (toasts < limeSlice && toasts < salt_for_toasts)
//     //     min = toasts / n;
//     // else if (limeSlice < toasts && limeSlice < salt_for_toasts)
//     //     min = limeSlice / n;
//     // else 
//     //     min = salt_for_toasts / n;

//     // int x, y, z;

//     // x = toasts / n;
//     // y = limeSlice / n;
//     // z = salt_for_toasts / n;

//     // if(x < y && x < z) min = x;
//     // else if(y < x && y < z) min = y;
//     // else min = z;

//     min = std::min({toasts, limeSlice, salt_for_toasts}) / n;

//     std::cout << min << std::endl;

//     return 0;
// }






// >>>>>>>>>> >>>>>>>>> >>>>>>>>> >>>>>>>>>

int main()
{
    int n, k, l, c, d, p, nl, np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int drinks = k * l;
    int toasts = drinks / nl;
    int limeSlice = c * d;
    int salt_for_toasts = p / np;

    int min = 0;

    min = std::min({toasts, limeSlice, salt_for_toasts}) / n;

    std::cout << min << std::endl;

    return 0;
}

