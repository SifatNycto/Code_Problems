#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

// t for test cases 
// n for 2d vector interger array for storing number of monsters for each particular test cases
// k is for integer array for each cases related damages


// int main()
// {
//     int t;
//     std::cin >> t;
//     std::vector<std::vector<int>> n(t);
//     int k[t];

//     for (int i = 0; i < t; i++)
//     {
//         int monster[t];
//         std::cin >> n[i];
//         std::cin >> k[i];


//     }

//     for (int i = 0; i < t; i++)
//     {

//     }

//     return 0;
// }








// int main()
// {
//     int t;
//     std::cin >> t;

//     // std::vector<std::vector<int>> n(t);

//     for (int i = 0; i < t; i++)
//     {
//         int n, k;
//         std::cin >> n >> k;

//         int monster[n];

//         for(int j = 0; j < 3; j++)
//         {
//             std::cin >> monster[j];
//         }

//         int defeated_monster[n];

//         for (int m = 0; m < n; m++)
//         {
//             int size = sizeof(monster) / sizeof(monster[0]);
//             // int max_health = *std::max_element(monster, monster + size);

//             int max_health_index = 0;

//             for (int s = (size - 1); s > -1; s--)
//             {
//                 if (monster[s] > monster[max_health_index])
//                     max_health_index = s;
//             }


//             for (int p = 0; p < size; p++)
//             {
//                 if (monster[p] == monster[max_health_index])
//                 {
//                     monster[p] -= k;
//                 }

//                 for (int r = 0; r < size; r++)
//                 {
//                     if (monster[r] <= 0)
//                         defeated_monster[r] = r + 1;
//                 }
//             }

//             for (int x : defeated_monster)
//             std::cout << x << " ";

//         }
//     }

//     return 0;    
// }



// int main() {
//     std::vector<int> numbers;
//     numbers[0]=2;
//     numbers.push_back(10);
//     numbers.push_back(20);
//     // Vector now contains: {10, 20}
//     std::cout<<numbers[0];
//     return 0;
// }   








using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<pair<long long,int>> v;

        for (int i = 1; i <= n; i++) {
            long long a;
            cin >> a;

            long long rem = a % k;

            if (rem == 0)
                rem = k;

            v.push_back({rem, i});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
                if (a.first != b.first)
                    return a.first > b.first;
                return a.second < b.second;
            });

        for (auto &p : v)
            cout << p.second << ' ';

        cout << '\n';
    }
}