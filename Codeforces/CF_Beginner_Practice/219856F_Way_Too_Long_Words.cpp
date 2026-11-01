#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() > 10)
        {
            cout << s.front() << s.size() - 2 << s.back() << "\n";
        }
        else
            cout << s << "\n";
    }

    return 0;
}

// cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";