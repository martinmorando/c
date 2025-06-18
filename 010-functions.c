/*
    Functions
*/

#include <stdio.h>

// void: first 'void'  -> returns nothing
//       second 'void' -> expects no argument 
void print_message(void) {
    printf("Keep going");
}

// int
int return_n(int n) {
    return n;
}

int main() {

    // Call functions
    print_message();

    int x = return_n(21);
    printf("\n%i\n", x);

    
}