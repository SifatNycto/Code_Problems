#include <iostream>

// int main()
// {
//     int HH, MM;
//     char colon;

//     std::cin >> HH >> colon >> MM;
 
//         double min_angle = MM * 6.0;
//         double hour_angle = (HH % 12) * 30.0 + MM * 0.5;
        
//         std::cout << hour_angle << " " << min_angle;

//     return 0;
// }




int main()
{
    int HH, MM;
    char colon;
    std::cin >> HH >> colon >> MM;

    float min_angle = MM * 6;
    float hour_angle = (HH % 12) * 30 + MM * .5;

    std::cout << hour_angle << " " << min_angle;

    return 0;
}