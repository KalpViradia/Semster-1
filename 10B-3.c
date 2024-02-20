#include <stdio.h>
void main() {
    int num, reverse = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    if(num == reverse)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
}