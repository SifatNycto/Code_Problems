#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;


    std::vector<int> x(t);
    std::vector<int> y(t);

    for(int i = 0; i < t; i++)
    {
        std::cin >> x[i];
        std::cin >> y[i];
    }

    for (int i = 0; i < t; i++)
    {
        int Fx = x[i] % 2;
        int Fy = y[i] % 2;

        if (Fx == 0 && Fy == 0) std::cout << "YES" << std::endl;

        else if(Fx == 0 && Fy == 1) std::cout << "YES" << std::endl;

        else if(Fx == 1 && Fy == 0) std::cout << "YES" << std::endl;

        else std::cout << "NO" << std::endl;

    }

    return 0;
}