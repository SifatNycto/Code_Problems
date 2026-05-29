#include <iostream>

int main()
{
    int k, n, w;
    std::cin >> k >> n >> w;

    int totalPrice = 0;

    for (int i = 1; i <= w; i++)
    {
        totalPrice += (i * k);
    }

    int borrow = 0;
    if (n >= totalPrice) std::cout << borrow << std::endl;
    else
    {
        borrow = totalPrice - n;
        std::cout << borrow << std::endl;
    }

    return 0;
}

// 'k' -> price of first banana (each)
// price of bananas will be 
    // if w bananas then have for loop thourgh the w times
        // each loop i * k then will be stored and added for the total
// 'n' -> initial money he have
// rest of money to the total will be borrowed from friend, ???
    // borrows = totals(i * k) - n
// 'w' -> number of bananas

/*
k n  w
3 17 4

    (1 * 3) + (2 * 3) + (3 * 3) + (4 * 3)
=> 3 + 6 + 9 + 12
=> 30
have $17
borrow 30 - 17 = $13
*/