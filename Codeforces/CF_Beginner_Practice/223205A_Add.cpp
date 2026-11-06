#include <bits/stdc++.h>
using namespace std;

int sum(int x, int y)
{
    int summation = x + y;

    return summation;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    cout << sum(x, y) << "\n";

    return 0;
}