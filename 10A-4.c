#include <stdio.h>
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The digits of the number are: ");
    int reverse = 0;
    while(num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    while(reverse != 0) {
        printf("%d ", reverse % 10);
        reverse /= 10;
    }
}