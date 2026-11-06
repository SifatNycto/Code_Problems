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
    int z[N];

    for (int i = 0; i < N; i++) z[i] = i+1;

    if (N % 2 == 0)
    {
        int b[N/2];
        int c[N/2];

        for (int i = 0; i < N/2; i++)
            b[i] = z[i];
        
        for (int i = 0; i < N/2; i++)
            c[i] = z[(N/2) + i];
        
        reverse(c, c + (N/2));

        for (int i = 0; i < N/2; i++)
            a[2 * i] = b[i];

        for (int i = 0; i < N/2; i++)
            a[2 * i + 1] = c[i];



        for (int i = 0; i < N; i++)
            cout << a[i];
    }

    else
    {
        int b[(N+1)/2];
        int c[N - (N+1)/2];

        for (int i = 0; i < (N+1)/2; i++)
            b[i] = z[i];
        
        for (int i = 0; i < N-(N+1)/2; i++)
            c[i] = z[(N/2) + i + 1];
        

        reverse(c, c + (N - (N+1)/2));
        
        for (int i = 0; i < (N+1)/2; i++)
            a[2 * i] = b[i];

        for (int i = 0; i < N - (N+1)/2; i++)
            a[2 * i + 1] = c[i];


        for (int i = 0; i < N; i++)
            cout << a[i];
    }

    return 0;
}
