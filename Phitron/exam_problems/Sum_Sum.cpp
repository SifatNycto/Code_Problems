#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int posSum = 0;
    int negSum = 0;

    while (N--)
    {
        int x;
        cin >> x;

        if (x > 0) posSum += x;
        if (x < 0) negSum += x;
    }

    cout << posSum << " " << negSum << "\n";

    return 0;
}