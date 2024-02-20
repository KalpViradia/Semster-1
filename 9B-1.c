#include <stdio.h>
void main() {
    char ch = 'A';
    printf("Uppercase alphabets: ");
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\nLowercase alphabets: ");
    ch = 'a';
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
}