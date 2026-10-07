#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    ll x0, y0, R;

    while (t--)
    {
        cin >> x0 >> y0 >> R;

        bool found = false;

        for (ll i = -R; i <= R; i++)
        {
            for (ll j = -R; j <= R; j++)
            {
                if (i*i + j*j == R*R)
                {
                    std::cout << i+x0 << " " << j+y0 << "\n";
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
    }


    return 0;
}