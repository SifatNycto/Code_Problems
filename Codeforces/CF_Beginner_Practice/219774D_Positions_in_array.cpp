#include <bits/stdc++.h>
using namespace std;

void arr_pos(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] <= 10)
            cout << "A[" << i << "] = " << arr[i] << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    arr_pos(arr, n);

    return 0;
}