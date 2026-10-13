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
        int A, B, C;
        float AVG;

        cin >> A >> B >> C;

        AVG = (A + B) / 2.0;

        if (AVG > C)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}