#include <bits/stdc++.h>
using namespace std;

void search(int arr[][105], int n, int m, int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "will not take number\n";
                return;
            }
        }
    }

    cout << "will take number\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    int arr[105][105];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x;
    cin >> x;

    search(arr, n, m, x);

    return 0;
}