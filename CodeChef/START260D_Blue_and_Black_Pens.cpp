#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    int threeBlue = A * 3;
    int blueBlackOnce = A + B;

    cout << min(threeBlue, blueBlackOnce);

    return 0;
}