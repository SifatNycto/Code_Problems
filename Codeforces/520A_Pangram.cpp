#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s1;

    cin >> n;
    cin >> s1;


    for (int i = 0; i < n; i++)
    {
        s1[i] = tolower(s1[i]);
    }

    bool isPangram = true;

    if (n < 26)
        isPangram = false;
    
    else
    {
        bool checklist[26] = {false};


        for (int i = 0; i < s1.size(); i++)
        {
            int pos = s1[i] - 'a';
            checklist[pos] = true;
        }

        for (int i = 0; i < 26; i++)
        {
            if (checklist[i] == false)
            {
                isPangram = false;
                break;
            }
        }
    }

    if (isPangram) cout << "YES";
    else cout << "NO";

    return 0;
}