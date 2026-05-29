#include <iostream>
#include <cmath>

// int main()
// {
//     int arr[5][5];

//     int rows = sizeof(arr) / sizeof(arr[0]);
//     int columns = sizeof(arr[0]) / sizeof(arr[0][0]);

//     int row_index, column_index;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             std::cin >> arr[i][j];
            
//             if (arr[i][j] == 1)
//             {
//                 row_index = i;
//                 column_index = j;
//             }
//         }
//     }

//     std::cout << abs(row_index - 2) + abs(column_index - 2);

//     return 0;
// }





int main()
{
    int arr[5][5];;
    
    int rows = sizeof(arr) / sizeof(arr[0]);
    int columns = sizeof(arr[0]) / sizeof(arr[0][0]);
    int row_index, col_index;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                row_index = i;
                col_index = j;
            }
        }
    }

    std::cout << abs(row_index - 2) + abs(col_index - 2);

    return 0;
}