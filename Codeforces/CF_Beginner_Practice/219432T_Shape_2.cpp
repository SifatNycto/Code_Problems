#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
            cout << " ";
        
        for (int j = i; j >= 1; j--)
            cout << "*";
        
        for (int j = 2; j <= i; j++)
            cout << "*";

        cout << "\n";
    }

    return 0;
}

/*

    1
   212
  32123
 4321234
543212345


*/