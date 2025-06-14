/*
    Strings
*/

#include <stdio.h>
#include <string.h>

int main() {

    // [CREATE]
    // - Alternative A
    char messageA[] = "The internet and AI have made the formal educational system obsolete. The pessimistic teachers will have to work now.";
    printf("%s\n", messageA);
    
    // - Alternative B: notice the "null terminating character" (\0) 
    char messageB[] = {'K', 'e', 'e', 'p', ' ', 'g', 'o', 'i', 'n', 'g', '!', '\0'};
    printf("%s\n", messageB);

    
    // [REPLACE]
    messageB[10] = '.';
    printf("%s\n", messageB);


    // [FUNCTIONS FROM <string.h>]
    // - strlen(): returns number of characters in string; omits \0
    int lengthB = strlen(messageB);
    printf("%i\n", lengthB);

    // - strcat(a, b): appends characters from 'b' to 'a'. IMPORTANT: 'a' must have enough space to prevent buffer overflow
    char new_string_a[11] = "aaaaa"; // aaaaa (5) + bbbbb (5) + \0 (1)
    char new_string_b[] = "bbbbb";
    strcat(new_string_a, new_string_b);
    printf("%s\n", new_string_a);

}