#include <bits/stdc++.h>
using namespace std;

void zero_shift(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            cout << arr[i] << " ";
    
    for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            cout << arr[i] << " ";
    
    cout << "\n";
}

// void zero_shift(int arr[], int n)
// {
//     int zeros = 0;
//     for (int i = 0; i < n; i++)
//         if (arr[i] == 0)
//             zeros++;
    
//     for (int i = 0; i < n; i++)
//         if (arr[i] != 0)
//             cout << arr[i] << " ";
    
//     for (int i = 0; i < zeros; i++)
//         cout << 0 << " ";
    
//     cout << "\n";
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    zero_shift(arr, n);
    
    return 0;
}