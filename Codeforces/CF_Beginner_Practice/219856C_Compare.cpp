#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x, y;
    cin >> x >> y;

    int i = 0;
    while (true)
    {
        if (x[i] == '\0')
        {
            cout << x << "\n";
            break;
        }
        else if (y[i] == '\0')
        {
            cout << y << "\n";
            break;
        }
        else if (x[i] < y[i])
        {
            cout << x << "\n";
            break;
        }
        else if (y[i] < x[i])
        {
            cout << y << "\n";
            break;
        }
        else if (x[i] == y[i])
        {
            i++;
        }
    }

    return 0;
}