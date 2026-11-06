#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int vowels = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' ||
            s[i] == 'e' ||
            s[i] == 'i' ||
            s[i] == 'o' ||
            s[i] == 'u')
        {
            vowels++;
        }
    }

    cout << s.size() - vowels << "\n";

    return 0;
}