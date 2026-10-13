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
        int X;
        cin >> X;

        if (X + 3 <= 10)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    
    return 0;
}