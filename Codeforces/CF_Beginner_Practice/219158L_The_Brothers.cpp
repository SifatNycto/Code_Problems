#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string F1, S1, F2, S2;
    cin >> F1 >> S1;
    cin >> F2 >> S2;

    if (S1 == S2)
        cout << "ARE Brothers\n";
    else
        cout << "NOT\n";

    return 0;
}