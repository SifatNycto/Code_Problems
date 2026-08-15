#include <iostream>

int fibo(int n);
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    std::cout << fibo(N);

    return 0;
}

int fibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibo(n - 1) + fibo(n - 2);
}