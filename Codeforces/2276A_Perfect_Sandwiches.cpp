#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sand = 0;
        
        if (a > b)
        {
            sand = min(b, a-b);
            cout << sand << "\n";
        }
        else
        {
            cout << -1 << "\n";
            continue;
        }

    }

    return 0;
}


// if (b > a)
// {
//     cout << -1 << "\n";
//     continue;
// }


// if (b / 2 < a / 2)
// {
//     if (b <= 2)
//     {
//         cout << 1 << "\n";
//         continue;
//     }
//     else
//         cout << b/2 << "\n";
// }





//  while (a > b)
//     {
        
//         a -= 2;
//         b -= 1;
//         sand++;

//         if (a <= 1) break;

//     }

//     cout << sand-1 << "\n";