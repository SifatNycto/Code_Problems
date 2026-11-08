#include <bits/stdc++.h>
using namespace std;

void print(int a[], int n, int i)
{
    if (i == n)
        return;
    
    print(a, n, i+1);

    if (i % 2 == 0)
        cout << a[i] << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    print(a, n, 0);

    cout << "\n";

    return 0;
}