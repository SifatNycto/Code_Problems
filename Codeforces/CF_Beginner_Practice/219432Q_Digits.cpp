#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while (T--)
    {
        int N;
        cin >> N;

        if (N == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        while (N > 0)
        {
            cout << N % 10 << " ";
            N /= 10;
        }
        cout << "\n";
    }

    return 0;
}