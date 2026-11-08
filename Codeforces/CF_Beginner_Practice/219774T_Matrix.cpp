#include <bits/stdc++.h>
using namespace std;

int calc_diff_diagonals(int arr[][105], int n)
{
    int sum_primary = 0;
    int sum_secondary = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                sum_primary += arr[i][j];
            
            if (i+j == n-1)
                sum_secondary += arr[i][j];
        }
    }

    return (sum_primary - sum_secondary);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    
    int arr[105][105];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int diff = calc_diff_diagonals(arr, n);

    cout << abs(diff) << "\n";

    return 0;
}