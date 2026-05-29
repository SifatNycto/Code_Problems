#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    int t;
    std::cin >> t;

    int s;
    std::cin >> s;
    
    // std::vector<int> arr[t]; || Invalid
    std::vector<std::vector<int>> arr(t, std::vector<int>(s));
    


    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < s; i++)
        {
            std::cin >> arr[j][i];
        }
    }

    int diff[t] = {};
    // std::vector<int> diff(t, 0);

    for (int j = 0; j < t; j++)
    {
       

        for (int i = 0; i < (s-1); i++)
        {
            diff[j] += (arr[j][i+1] - arr[j][i]);
        }

        std::cout << diff[j] << std::endl;
    }

    

    return 0;
}