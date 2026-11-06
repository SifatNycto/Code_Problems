#include <bits/stdc++.h>
using namespace std;

void sort(int a, int b, int c)
{
    int arr[3] = {a, b, c};

    for (int i = 0; i < 2; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int x : arr)
        cout << x << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    sort(a, b, c);

    cout << "\n";

    cout << a << "\n" << b << "\n" << c << "\n";

    return 0;
}