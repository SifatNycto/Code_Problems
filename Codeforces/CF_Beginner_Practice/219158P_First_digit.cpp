#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string X;
    cin >> X;

    int firstDigit = X[0] - '0';

    if (firstDigit % 2 == 0)
        cout << "EVEN\n";
    else
        cout << "ODD\n";

    return 0;
}