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

    for (int i = n; i >= 1; i--)
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
   21 2
  321 23
 4321 234
54321 2345

 4321 234
  321 23
   21 2
    1


*/