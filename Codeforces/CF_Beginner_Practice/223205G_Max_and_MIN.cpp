#include <bits/stdc++.h>
using namespace std;

void max_min(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
         if (arr[i] > max)
            max = arr[i];
        
        if (arr[i] < min)
            min = arr[i];
    }
    
    cout << min << " " << max << "\n";
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
    
    max_min(arr, n);
  
    return 0;
}