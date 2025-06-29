/*
    Structs
*/

#include <stdio.h>

int main() {

    struct Company {        
        char code[2];
        char* name;
        int year_created;
    };

    struct Company abc = {"A1", "Stark Industries", 2025};

    struct Company def;
    def.year_created = 2026;

}