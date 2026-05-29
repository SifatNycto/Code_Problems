#include <iostream>
int main()
{
    int a, b, count = 0;
    std::cin >> a >> b;

    while (!(a > b))
    {
        a *= 3;
        b *= 2;
        count++;
    }

    std::cout << count;

    return 0;
}