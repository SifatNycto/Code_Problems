#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    if (N < 2)
    {
        cout << -1 << "\n";
        return 0;
    }

    for (int i = 2; i <= N; i+=2)
        cout << i << "\n";
    
    return 0;
}