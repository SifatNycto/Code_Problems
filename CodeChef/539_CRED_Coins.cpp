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
        int X, Y;
        cin >> X >> Y;

        int mul = X * Y;
        int bags = 0;

        if (mul == 100)
            bags += 1;
        
        if (mul > 100)
            bags += mul / 100;
        
        cout << bags << "\n";
    }

    return 0;
}