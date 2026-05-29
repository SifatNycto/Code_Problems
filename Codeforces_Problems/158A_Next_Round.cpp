#include <iostream>

// int main()
// {
//     int n, k, count = 0;
//     std::cin >> n >> k;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if ((arr[i] >= arr[k-1]) && (arr[i] > 0))
//         {
//             count++;
//         }
//     }
    
//     std::cout << count;

//     return 0;
// }





int main()
{
    int n, k, count = 0;
    std::cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[k-1] && arr[i] > 0)
            count++;
    }

    std::cout << count;

    return 0;
}