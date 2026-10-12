#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> N(n);

    for (int i = 0; i < n; i++)
        cin >> N[i];
    
    sort(N.rbegin(), N.rend());

    int Total = 0;
    for (int x : N) Total += x;

    int pick = 0;
    int coins = 0;
    for (int i = 0; i < n; i++)
    {
        pick += N[i];
        coins++;
        Total -= N[i];

        if (pick > Total) break;
    }

    cout << coins << "\n";

    return 0;
}