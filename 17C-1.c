#include <stdio.h>
void main() {
    char str[] = "Hello, World!";
    char *ptr;
    int length = 0;
    ptr = &str[0];
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("The length of the string is: %d\n", length);
}