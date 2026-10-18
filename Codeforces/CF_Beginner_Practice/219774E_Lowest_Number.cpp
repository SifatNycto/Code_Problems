#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];


    int minValue = A[0];

    for (int i = 1; i < N; i++)
        if (A[i] < minValue)
            minValue = A[i];


    for (int i = 0; i < N; i++)
    {
        if (A[i] == minValue)
        {
            cout << A[i] << " " << i+1 << "\n";
            break;
        }
    }

    return 0;
}