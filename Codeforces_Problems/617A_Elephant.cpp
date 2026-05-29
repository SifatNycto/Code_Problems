#include <iostream>
int main()
{
    int X;
    std::cin >> X;
    int result = X / 5;

    if (X % 5 != 0)
        result++;

    std::cout << result;
}