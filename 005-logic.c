/*
    Logic
*/

#include <stdio.h>

int main() {

    int x = 1;
    int y = 2;
    

    // If
    if (x == y) {
        printf("x = y");
    } else if (x > y) {
        printf("x > y");
    } else {
        printf("x < y");
    }


    // Ternary operator
    int z;
    z = x > y ? 1 : -1;
    printf("\n%d\n", z);


    // Switch
    switch (x) {
        case 0:
            printf("case 0");
            break;
        case 1:
            printf("case 1");
            break;
        case 2:
            printf("case 2");
            break;
        default:
            printf("default");
            break;
    }

}