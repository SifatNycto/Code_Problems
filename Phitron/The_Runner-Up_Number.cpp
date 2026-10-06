#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(all(v));

    //..........................

    int runnerUp = -1;
    bool found = false;

    for (int i = (n-2); i >= 0; i--)
    {
        if (v[i] < v[n-1])
        {
            runnerUp = v[i];
            found = true;
            break;
        }
    }

    if (found)
        cout << runnerUp;
    else
        cout << -1;

    return 0;
}