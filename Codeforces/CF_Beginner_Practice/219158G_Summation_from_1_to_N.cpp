#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N;
    cin >> N;

    ll sum = N * (N + 1) / 2;

    cout << sum << "\n";
    return 0;
}