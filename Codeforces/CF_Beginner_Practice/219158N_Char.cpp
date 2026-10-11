#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char X;
    cin >> X;

    char modifiedCase = (X ^ 32);
    cout << modifiedCase;

    return 0;
}