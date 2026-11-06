#include <bits/stdc++.h>
using namespace std;

void code_checker(int a, int b, string s)
{
    if (s.size() != a+b+1)
    {
        cout << "No\n";
        return;
    }

    if (s[a] != '-')
    {
        cout << "No\n";
        return;
    }

    for(int i = 0; i < s.size(); i++)
    {
        if (i == a) continue;
        
        if (!isdigit(s[i]))
        {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    string s;
    cin >> s;

    code_checker(a, b, s);

    return 0;
}