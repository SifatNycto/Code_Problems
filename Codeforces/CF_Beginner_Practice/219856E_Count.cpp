#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    int sum = 0;
    for (int i = 0; i < S.size(); i++)
    {
        sum += S[i] - '0';
    }

    cout << sum << "\n";

    return 0;
}