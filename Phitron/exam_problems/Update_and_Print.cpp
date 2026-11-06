#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
        cin >> A[i];
    
    int X, V;
    cin >> X >> V;

    for (int i = (N-1); i >= 0; i--)
    {
        if (i == X) A[i] = V;
        cout << A[i] << " ";
    }

    return 0;
}