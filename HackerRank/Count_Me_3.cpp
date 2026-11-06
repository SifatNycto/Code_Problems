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

        int upper = 0;
        int lower = 0;
        int digit = 0;

        for (char c : s)
        {
            if (c >= 'a' && c <= 'z') lower++;
            else if (c >= 'A' && c <= 'Z') upper++;
        }

        digit = s.size() - (upper + lower);

        cout << upper << " " << lower << " " << digit << "\n";
    }

    return 0;
}