#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    float A, B;
    cin >> A >> B;

    cout << "floor " << A << " / " << B << " = " << floor(A / B) << "\n";
    cout << "ceil " << A << " / " << B << " = " << ceil(A / B) << "\n";
    cout << "round " << A << " / " << B << " = " << round(A / B) << "\n";

    return 0;
}