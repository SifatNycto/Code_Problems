#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; i++)
        cin >> dragons[i].first >> dragons[i].second;
    
    sort(dragons.begin(), dragons.end());

    for (auto dragon : dragons)
    {
        if (s <= dragon.first)
        {
            cout << "NO\n";
            return 0;
        }

        s += dragon.second;
    }
    cout << "YES\n";

    return 0;
}
// 230A