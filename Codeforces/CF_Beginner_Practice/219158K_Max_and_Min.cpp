#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    int minimum = min({A, B, C});
    int maximum = max({A, B, C});

    cout << minimum << " " << maximum << '\n';

    return 0;
}