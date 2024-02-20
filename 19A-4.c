#include <stdio.h>
#include <string.h>
void findCharacter(char* str, char c){
    char* found = strchr(str, c);
    if(found != NULL)
        printf("Character '%c' found at position: %ld\n", c, found - str + 1);
    else
        printf("Character '%c' not found in the string.\n", c);
}
void main(){
    char str[] = "Hello, World!";
    char c = 'o';
    findCharacter(str, c);
}