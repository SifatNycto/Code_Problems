#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int A, B;
    B = N % 10;
    N /= 10;
    A = N;
    if (B == 0)
    {
        cout << "YES\n";
        return 0;
    }

    if (A % B == 0) cout << "YES\n";
    else if (B % A == 0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}