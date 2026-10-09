#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    map<string, int> freq;

    while (n--)
    {
        string team;
        cin >> team;

        freq[team]++;
    }

    int maxFrequency = 0;
    string winner;

    for (auto entry : freq)
    {
        if (entry.second > maxFrequency)
        {
            maxFrequency = entry.second;
            winner = entry.first;
        }
    }
      
    cout << winner;

    return 0;
}