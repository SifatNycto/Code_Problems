#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int X, Y;
        cin >> X >> Y;

        if (X > Y)
            swap(X, Y);
            
        int sumOdd = 0;
        for (int i = X+1; i < Y; i++)
            if (i % 2 != 0)
                sumOdd += i;

        cout << sumOdd << "\n";
    }

    return 0;
}