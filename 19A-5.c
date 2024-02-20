#include <stdio.h>
#include <string.h>
void replaceCharacter(char* str, char oldChar, char newChar){
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == oldChar){
            str[i] = newChar;
        }
    }
}
void main(){
    char str[] = "Hello World";
    char oldChar = 'o';
    char newChar = 'a';
    printf("Original string: %s\n", str);
    replaceCharacter(str, oldChar, newChar);
    printf("Modified string: %s\n", str);
}