#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    int a[t], b[t];
    
    for(int i = 0; i < t; i++)
    {
        std::cin >> a[i];
        std::cin >> b[i];

        
    }
    
    for(int i = 0; i < t; i++)
    {
        int count = 0;

        if (a[i] % b[i] == 0) std::cout << 0 << std::endl;
        
        else
        {   
            count = b[i] - (a[i] % b[i]);
            std::cout << count << std::endl;
        }
        
    }

    return 0;
}








// old >>>>>>>>>>>>>>>>>>>>>>>>>>>>


// int main()
// {
//     int t;
//     std::cin >> t;

//     int a[t], b[t];
    
//     for(int i = 0; i < t; i++)
//     {
//         std::cin >> a[i];
//         std::cin >> b[i];

        
//     }
    
//     for(int i = 0; i < t; i++)
//     {
//         int count = 0;

//         if (a[i] % b[i] == 0) std::cout << 0 << std::endl;
        
//         else
//         {   
//             while(!(a[i] % b[i] == 0))
//             {
//                 a[i] += 1;
//                 count += 1;
//             }
//             std::cout << count << std::endl;
//         }
        
//     }

//     return 0;
// }




