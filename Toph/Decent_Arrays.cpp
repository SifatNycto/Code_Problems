#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::cin >> N;

    int arr[N];
    
    for (int i = 0; i < N; i++)
    {
        std::cin >> arr[i];
    }

    bool ascending = true;
    
    for (int i = 0; i < (N-1); i++)
    {
        if (arr[i] > arr[i+1])
        {
            ascending = false;
            break;
        }
    }

    if (ascending) std::cout << "Yes";
    else std::cout << "No";

    return 0;
}