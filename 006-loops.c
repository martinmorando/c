/*
    Loops
*/

#include <stdio.h>

int main() {

    // For loop: the number of iterations is known
    for (int i = 1; i <= 10; i++) {

        if (i == 5) {
            continue;
        }

        if (i == 9) {
            break;
        }

        printf("For loop: %d\n", i);
    }


    // While loop: the number of iterations is not known
    int c = 1;
    while (c <= 10) {
        printf("While loop: %d\n", c);
        c++;
    }


    // Do while loop: executes at least once
    int d = 1;
    do {
        printf("Do while loop: %d\n", d);
        d++;
    } while (d > 3);

}