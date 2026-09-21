#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    
    int n[t];
    int a[t][3];
    int weak_participants[t];

    for (int i = 0; i < t; i++)
    {
        std::cin >> n[i];
        for (int j = 0; j < 3; j++)
            std::cin >> a[i][j];
        
        int min = std::min({a[i][0], a[i][1], a[i][2]});

        weak_participants[i] = n[i] - min;
        
    }

    for (int i : weak_participants)
        std::cout << i << "\n";

    return 0;
}