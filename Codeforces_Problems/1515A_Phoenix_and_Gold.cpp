#include <iostream>
#include <vector>
#include <utility>

void execute();
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while(t--) execute();

    return 0;
}

void execute()
{
    int n, x;
    std::cin >> n >> x;

    std::vector<int> w(n);
    int total_weight = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> w[i];
        total_weight += w[i];
    }

    if (total_weight == x)
    {
        std::cout << "NO" << "\n";
        return;
    }

    std::cout << "YES" << "\n";
    int present_weight = 0;
    for (int i = 0; i < n; i++)
    {
        if ((present_weight + w[i]) == x)
            std::swap(w[i], w[i+1]);

        present_weight += w[i];
    }

    for (int i : w)
        std::cout << i << " ";
        
    std::cout << "\n";
}