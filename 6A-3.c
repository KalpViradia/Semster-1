#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch))
        printf("%c is an upper case letter.\n", ch);
    else if (islower(ch))
        printf("%c is a lower case letter.\n", ch);
    else if (isdigit(ch))
        printf("%c is a digit.\n", ch);
    else
        printf("%c is a special character.\n", ch);
}