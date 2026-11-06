#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, Y;
    cin >> X >> Y;

    if ((Y > X) && (Y - X) <= 2)
        cout << "Yes\n";
    else if ((X > Y) && (X - Y) <= 3)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}