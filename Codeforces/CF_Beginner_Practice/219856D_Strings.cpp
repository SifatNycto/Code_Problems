#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << "\n";

    cout << a + b << "\n";

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    // swap(a[0], b[0]);

    cout << a << " " << b << "\n";

    return 0;
}