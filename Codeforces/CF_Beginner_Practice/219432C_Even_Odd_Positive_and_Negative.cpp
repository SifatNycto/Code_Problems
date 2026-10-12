#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int countEven = 0;
    int countOdd = 0;
    int countPos = 0;
    int countNeg = 0;

    while (N--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0) countEven++;
        if (n % 2 != 0) countOdd++;
        if (n > 0) countPos++;
        if (n < 0) countNeg++;
    }

    cout << "Even: " << countEven << "\n";
    cout << "Odd: " << countOdd << "\n";
    cout << "Positive: " << countPos << "\n";
    cout << "Negative: " << countNeg << "\n";

    return 0;
}