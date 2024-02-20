#include <stdio.h>
#include <stdlib.h>
void main()
{
    char str[100];
    int i, len = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("The string is: %s\n", str);
    printf("The length of the string is: %d\n", len);
}