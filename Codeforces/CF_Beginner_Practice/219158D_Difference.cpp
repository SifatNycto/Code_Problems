#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B, C, D;

    cin >> A >> B >> C >> D;

    long long X = (A * B) - (C * D);

    cout << "Difference = " << X;

    return 0;
}
