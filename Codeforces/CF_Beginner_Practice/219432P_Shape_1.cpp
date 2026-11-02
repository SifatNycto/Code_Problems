#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
            cout << "*";
        
        cout << "\n";
    }

    return 0;
}