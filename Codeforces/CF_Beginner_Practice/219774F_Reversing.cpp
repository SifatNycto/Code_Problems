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
    
    int i = 0;
    int j = N-1;
    while (!(i >= j))
    {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }

    for (int x : A)
        cout << x << " ";

    cout << "\n";

    return 0;
}