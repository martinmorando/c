/*
    Data types
*/

#include <stdio.h>

int main() {

    // [VARIABLES]
    int beers = 2;
    float tony_stark_net_worth_usd = 80000000000;
    double price = 16.79;       // More precision than float
    char letter = 'B';          // Single quotes


    // [CONSTANT]
    const int total_coins = 21;
    // total_coins = 22; This would throw an error


    // [TYPE CASTING]
    // - Implicit
    int price_2;
    price_2 = price;
    printf("%i", price_2);      // Output: 16

    // - Explicit
    int price_3;
    price_3 = (int)price;
    printf("%i", price_3);      // Output: 16    

}