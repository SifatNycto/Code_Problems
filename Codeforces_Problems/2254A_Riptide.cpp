#include <iostream>
#include <string>


int main()
{
    int t;
    std::cin >> t;

    int round[t];

    int a, b, c;

    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b >> c;
        
        round[i] = 0;

        while (!(a == b || b == c || c == a))
        {
            if (a > b && a > c)
            {
                a--;
                if (b > c) c++;
                else b++;
            }

            else if (b > c && b > a)
            {
                b--;
                if (a > c) c++;
                else a++;
            }
            
            else
            {
                c--;
                if(a > b) b++;
                else a++;
            }

            round[i]++;
        }
    }

    for (int i : round)
    {
        std::cout << i << std::endl;
    }

    return 0;
}
