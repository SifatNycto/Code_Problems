#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int N;
    cin >> N;

    int a[N];

    for (int i = 0; i < N; i++)
        cin >> a[i];

    bool isSorted = false;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
            else isSorted = true;
        }
    }

    // for (int i : a) cout << i;
    

    if (isSorted) cout << 0;
    else cout << 1;


    return 0;
}
