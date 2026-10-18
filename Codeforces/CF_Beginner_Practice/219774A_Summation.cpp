#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    long long sum = 0;

    while (N--)
    {
        long long x;
        cin >> x;
        sum += x;
    }
    
    cout << abs(sum) << "\n";

    return 0;
}