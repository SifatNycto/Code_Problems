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
        long long N;
        cin >> N;

        if (N == 0)
        {
            cout << 1 << "\n";
            continue;
        }

        long long fact = 1;
        for (int i = 1; i <= N; i++)
        {
            fact *= i;
        }
        cout << fact << "\n";
    }

    return 0;
}