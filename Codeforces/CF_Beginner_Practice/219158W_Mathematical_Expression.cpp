#include <bits/stdc++.h>
using namespace std;

void sum(int a, int b, int c)
{
    if (a + b == c)
        cout << "Yes\n";
    else
        cout << a + b << "\n";
}

void sub(int a, int b, int c)
{
    if (a - b == c)
        cout << "Yes\n";
    else
        cout << a - b << "\n";
}

void mul(int a, int b, int c)
{
    if (a * b == c)
        cout << "Yes\n";
    else
        cout << a * b << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    char sign, equal;
    cin >> a >> sign >> b >> equal >> c;

    if (sign == '+')
        sum(a, b, c);
    if (sign == '-')
        sub(a, b, c);
    if (sign == '*')
        mul(a, b, c);

    return 0;
}