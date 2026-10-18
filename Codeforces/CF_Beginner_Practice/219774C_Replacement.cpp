#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] > 0) A[i] = 1;
        if (A[i] < 0) A[i] = 2;
    }

    for (int x : A)
        cout << x << " ";
    cout << "\n";

    return 0;
}