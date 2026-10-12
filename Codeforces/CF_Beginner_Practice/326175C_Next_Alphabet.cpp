#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    cin >> c;

    if (c == 'z')
        cout << 'a' << '\n';
    else
        cout << (char)(c+1);

    return 0;
}