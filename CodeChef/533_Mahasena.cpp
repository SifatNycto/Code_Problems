#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    int evenCount = 0;
    int oddCount = 0;
    while (N--)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    if (evenCount > oddCount)
        cout << "READY FOR BATTLE\n";
    else
        cout << "NOT READY\n";

    return 0;
}