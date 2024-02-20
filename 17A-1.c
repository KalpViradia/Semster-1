#include <stdio.h>
void main() {
    int var;
    printf("Enter a number: ");
    scanf("%d", &var);
    int *ptr;
    ptr=&var;
    printf("Value of var: %d\n", *ptr);
    printf("%d\n",&var);
    printf("Address of var: %d\n", ptr);
}