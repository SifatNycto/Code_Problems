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
        cin >> A[i];

    for (int i = 0; i < N; i++)
        if (A[i] <= 10)
            cout << "A[" << i << "] = " << A[i] << "\n";

    return 0;
}