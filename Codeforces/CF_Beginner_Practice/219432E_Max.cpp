#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    // first value passing..........
    int firstValue;
    cin >> firstValue;

    int maxValue = firstValue;
    
    for (int i = 0; i < (N-1); i++)
    {
        int n;
        cin >> n;
        maxValue = max(maxValue, n);
    }

    cout << maxValue << "\n";

    return 0;
}



// Vector approach.............

// int N;
// cin >> N;
// vector<int> n(N);

// for (int i = 0; i < N; i++)
// {
//     cin >> n[i];
// }

// int maxValue = n[0];
// for (int i = 0; i < n.size(); i++)
//     maxValue = max(maxValue, n[i]);

// cout << maxValue << "\n";
