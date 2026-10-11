#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char X;
    cin >> X;

    if (X >= '0' && X <= '9')
    {
        cout << "IS DIGIT\n";
    }
    else
    {
        cout << "ALPHA\n";
        
        if (X >= 'A' && X <= 'Z')
            cout << "IS CAPITAL\n";
        else
            cout << "IS SMALL\n";
    }

    return 0;
}