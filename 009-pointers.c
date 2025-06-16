/*
    Pointers
    - &: reference operator.
    - *: left of the equal sign                      --> pointer declaration (defines a pointer variable).
         right of the equal sign (or in expressions) --> dereference operator (accesses the value at the address).
    - Addition and subtraction are the only operations allowed on pointers (not
      between them), and they are used to navigate through memory addresses.
*/

#include <stdio.h>

int main() {

    // [POINTERS]
    int var = 1;
    // Pointer to the variable. Contains the memory address of 'var'
    int *pointer = &var;      // Also valid: int* pointer = &var;
    printf("%p\n", pointer);

    // Dereference the pointer to access its value
    printf("%i\n", *pointer);


    // [POINTERS & ARRAYS]
    // Loop through an array using a pointer as arrays are contigous blocks of memory.
    int arr[] = {3, 4, 5, 6, 7};
    int* pointer_2 = &arr[0];
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%i ", *pointer_2);
        pointer_2++;
    } 
    
}