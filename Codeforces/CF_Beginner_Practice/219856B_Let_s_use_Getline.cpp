#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    getline(cin, S);

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '\\') break;
        cout << S[i];
    }
    
    cout << "\n";

    return 0;
}





// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string S;
//     getline(cin, S);

//     for (int i = 0; S[i] != '\\'; i++)
//     {
//         cout << S[i];
//     }
    
//     cout << "\n";

//     return 0;
// }