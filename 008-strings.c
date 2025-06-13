/*
    Strings
*/

#include <stdio.h>

int main() {

    // Alternative A
    char messageA[] = "The internet and AI have made the formal educational system obsolete. The pessimistic teachers will have to work now.";
    printf("%s\n", messageA);
    
    // Alternative B: notice the "null terminating character" (\0) 
    char messageB[] = {'K', 'e', 'e', 'p', ' ', 'g', 'o', 'i', 'n', 'g', '!', '\0'};
    printf("%s\n", messageB);

}