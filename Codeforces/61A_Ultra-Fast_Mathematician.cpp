#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string a, b, c;

    std::cin >> a >> b;

    c.resize(a.size(), ' ');

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0' && b[i] == '0') c[i] = '0';

        else if (a[i] == '0' && b[i] == '1') c[i] = '1';

        else if (a[i] == '1' && b[i] == '0') c[i] = '1';

        else c[i] = '0';

    }

    std::cout << c;

    return 0;
}


/*
combinations

0   0   1   1
0   1   0   1

0   1   1   0

*/