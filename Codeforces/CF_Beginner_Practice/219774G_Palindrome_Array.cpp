#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0;
    int j = n-1;
    
    bool isPalindrome = true;
    while (!(i >= j))
    {
        if (a[i] != a[j])
        {
            isPalindrome = false;
            break;
        }
        
        i++;
        j--;
    }

    if (isPalindrome)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}