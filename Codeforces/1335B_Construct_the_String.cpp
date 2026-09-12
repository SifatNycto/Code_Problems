#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>


// int main()
// {
   
//     // int random_num = (rand() % (max - min + 1)) + min;

    


//     // char random_num[5];

//     // for (int i = 0; i < 5; i++)
//     // {
//     //     random_num[i] = distr(gen);
//     // }


//     // for (char i : random_num)
//     // {
//     //     std::cout << "number: " << i << std::endl;
//     // }


//     // for (char u : user_name)
//     // {
//     //     if (result.find(u) == std::string::npos)
//     //         result += u;
//     // }

//     //std::cout << "Random Number: " << random_num;



//     int t;
//     std::cin >> t;

//     int n, a, b;
    
//     for(int i = 0; i < t; i++)
//     {
//         std::cin >> n >> a >> b;
//     }

//     std::random_device rd;
//     std::mt19937 gen(rd());
//     std::uniform_int_distribution<> distr(97, 122);

//     char randChar[n];
//     for(int i = 0; i < n; i++)
//     {
//         randChar[i] += (char)distr(gen);
//     }

//     for (char i : randChar)
//     {
//         std::cout << "number: " << i << std::endl;
//     }


//     return 0;
// }



/*
```#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(){
    int n,a,b;
    string s="";
    cin>>n>>a>>b;

    for(int i=0;i<n;i++){
        s += char('a' + (i % b));
    }
    cout<<s<<endl;
}
    

int main(){
   int t;
   cin>>t;

   while(t--){
    solve();
   }return 0;
}
*/


// int main()
// {
//     int t;
//     std::cin >> t;

//     int n, a, b;
//     std::vector<std::string> s(t);

//     while(t--)
//     {
//         std::cin >> n >> a >> b;

//         for(int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 s[i][j] += (char) ('a' + (i % b));
//             }
//         }
        
//     }
//     for (int i = 0; i < t; i++)
//     {
//         for (int j = 0; j < t; j++)
//         {
//             std::cout << s[i][j] << std::endl;
//         }
//     }

//     return 0;
// }



#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, a, b;
        std::cin >> n >> a >> b;

        std::string str;

        for (int j = 0; j < n; j++)
        {
            str += (char)('a' + (j % b));
        }

        std::cout << str << std::endl;
    }

    return 0;
}