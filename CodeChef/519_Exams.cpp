#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        double fifty = (X * Y) * 0.5;

        if (Z > fifty)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}