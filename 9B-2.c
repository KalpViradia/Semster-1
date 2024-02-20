#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int i = 0;
    while (num > 0)
    {
        while (num >= values[i])
        {
            printf("%s", roman[i]);
            num -= values[i];
        }
        i++;
    }
    printf("\n");
}