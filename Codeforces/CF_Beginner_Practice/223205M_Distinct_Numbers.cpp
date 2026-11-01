#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    bool freq[2010] = {false};
    int distinct_count = 0;

    for (int i = 0; i < n; i++)
    {
        int index = arr[i] + 1000;

        if (freq[index] == false)
        {
            freq[index] = true;
            distinct_count++;
        }
    }

    return distinct_count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[1010];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int counted_distinct = countDistinct(arr, n);
    cout << counted_distinct << "\n";

    return 0;
}