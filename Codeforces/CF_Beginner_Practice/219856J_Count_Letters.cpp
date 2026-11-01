#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> freq(26);
    for (int i = 0; i < s.size(); i++)
        freq[s[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (freq[i] > 0)
            cout << (char) (i+'a') << " : " << freq[i] << "\n";

    return 0;
}