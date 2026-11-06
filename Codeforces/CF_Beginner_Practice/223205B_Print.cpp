#include <bits/stdc++.h>
using namespace std;

void printAll(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i != n)
            cout << " ";

    }
       
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    printAll(n);

    cout << "\n";

    return 0;
}