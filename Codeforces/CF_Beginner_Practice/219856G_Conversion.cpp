#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (char &c : s)
    {
        if (islower(c))
            c -= 32;
        else if (isupper(c))
            c += 32;
        else
            c = ' ';
    }

    cout << s << "\n";

    return 0;
}




// for (int i = 0; i < s.size(); i++)
// {
//     if (islower(s[i]))
//         s[i] = toupper(s[i]);
//     else if (isupper(s[i]))
//         s[i] = tolower(s[i]);
//     else
//         s[i] = ' ';
// }