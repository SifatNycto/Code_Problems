#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int divBy2 = 0;
    int divBy3 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] % 3 == 0) divBy2++;
        else if (a[i] % 2 == 0) divBy2++;
        else if (a[i] % 3 == 0) divBy3++;
    }

    cout << divBy2 << " " << divBy3 << "\n";

    return 0;
}