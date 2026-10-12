#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b - c == d) cout << "YES\n";
    else if (a + b * c == d) cout << "YES\n";
    else if (a - b + c == d) cout << "YES\n";
    else if (a - b * c == d) cout << "YES\n";
    else if (a * b + c == d) cout << "YES\n";
    else if (a * b - c == d) cout << "YES\n";    
    else cout << "NO\n";

    return 0;
}

/*
+-
+*
-+
-*
*+
*-
*/
