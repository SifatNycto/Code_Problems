#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    while (N--)
    {
        int countLike = 0;
        int x;
        cin >> x;

        for (int i = 1; i <= INT_MAX; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                countLike++;
                if (countLike == x)
                {
                    cout << i << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}


/*

1 2 3 4 5 6 7  8  9  1000
| | | | | | |  |  |  |
1 2 4 5 7 8 10 11 14 1666


1,2,4,5,7,8,10,11,14,16

*/