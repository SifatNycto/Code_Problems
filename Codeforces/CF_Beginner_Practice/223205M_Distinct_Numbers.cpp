#include <bits/stdc++.h>
using namespace std;

// int countDistinct(int arr[], int n)
// {
//     bool freq[2010] = {false};
//     int distinct_count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int index = arr[i] + 1000;

//         if (freq[index] == false)
//         {
//             freq[index] = true;
//             distinct_count++;
//         }
//     }

//     return distinct_count;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     int arr[1010];

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
    
//     int counted_distinct = countDistinct(arr, n);
//     cout << counted_distinct << "\n";

//     return 0;
// }



void distinct(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != arr[i-1])
            count++;
    
    if (n == 0)
        cout << 0 << "\n";
    else
        cout << count << "\n";
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
    
    distinct(arr, n);

    return 0;
}