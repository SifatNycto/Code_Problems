#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int firstVal;
    cin >> firstVal;
    int minOps = abs(firstVal);

    for (int i = 0; i < (N-1); i++)
    {
        int x;
        cin >> x;
        minOps = min(minOps, abs(x));
    }

    cout << minOps << "\n";

    return 0;
}





// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;

//     int minOps = INT_MAX;

//     for (int i = 0; i < N; i++)
//     {
//         int x;
//         cin >> x;

//         minOps = min(minOps, abs(x));
//     }

//     cout << minOps << "\n";

//     return 0;
// }



// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int N;
//     cin >> N;

//     int n[N];
//     for (int i = 0; i < N; i++) cin >> n[i];

//     int ops = 0;
//     int minVal = abs(n[0]);
//     for (int i = 0; i < N; i++)
//     {
//         if (abs(n[i]) < minVal)
//             minVal = abs(n[i]);
//     }

//     ops = minVal;
//     cout << ops << "\n";

//     return 0;
// }


