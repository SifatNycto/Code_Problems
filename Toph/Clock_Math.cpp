#include <iostream>
#include <cmath>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int H, M;
    
    double angle;

    std::cin >> H >> M;

    if (H >= 12) H %= 12;

    float hour_angle = (H * 30) + (M * 0.5);
    float minute_angle = M * 6;
    
    angle = std::abs(hour_angle - minute_angle);

    if (angle > 180) std::cout << 360.00 - angle;
    else std::cout << angle;

    return 0;
}