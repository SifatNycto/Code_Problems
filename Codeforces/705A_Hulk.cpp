#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::string layer1 = "I hate ";
    std::string layer2 = "I love ";

    if (n % 2 == 0)
    {
        while (n != 0)
        {
            std::cout << layer1;
            n--;

            std::cout << "that ";

            std::cout << layer2;
            n--;

            if (n != 0)
                std::cout << "that ";
        }
        std::cout << "it";
    }

    if (n % 2 != 0)
    {
        std::cout << "I hate ";
        n--;

        while (n != 0)
        {
            if (n != 0)
                std::cout << "that ";

            std::cout << layer2;
            n--;

            std::cout << "that ";

            std::cout << layer1;
            n--;

        }
        std::cout << "it";
    }
    

    return 0;
}