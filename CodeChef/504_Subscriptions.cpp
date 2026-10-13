#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N, X;
        cin >> N >> X;
        float minCost = 0;

        if (N <= 6)
            cout << X << "\n";
        
        else
        {
            minCost = ceil((double)N / 6);
            minCost *= X;
            cout << minCost << "\n";
        }
    }
    
    return 0;
}