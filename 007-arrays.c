/*
    Arrays
    - 0-indexed
    - Fixed size
*/

#include <stdio.h>

int main() {

    // Declare an array of 4 integers
    int a[4];

    // Declare and initialize an array of 3 integers
    int b[] = {1, 2, 3};
    int c[3] = {1, 2, 3}; // Also valid

    // Declare and initialize an array of 4 doubles
    double d[] = {1.0, 2.1, 3.2, 4.33};

    // Replace value by index
    d[2] = 0.1;
    printf("%f", d[2]);

}