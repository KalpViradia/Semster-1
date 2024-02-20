#include <stdio.h>
#include <string.h>
#include <ctype.h>
void strlower(char *str){
    for(int i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }
}
void strupper(char *str){
    for(int i = 0; str[i]; i++){
        str[i] = toupper(str[i]);
    }
}
void main(){
    char str1[100] = "Hello, World!";
    char str2[100] = "Goodbye, World!";
    char temp[100];
    printf("Length of str1: %lu\n", strlen(str1));
    if(strcmp(str1, str2) == 0)
        printf("str1 and str2 are the same.\n");
    else
        printf("str1 and str2 are different.\n");
    strcpy(temp, str1);
    printf("Copy of str1: %s\n", temp);
    strcat(temp, str2);
    printf("Concatenation of str1 and str2: %s\n", temp);
    printf("Reverse of str1: %s\n", strrev(str1));
    strlower(temp);
    printf("Lowercase version: %s\n", temp);
    strupper(temp);
    printf("Uppercase version: %s\n", temp);
}