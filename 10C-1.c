#include <stdio.h>
void main() {
    int number;
    int sum_of_digits = 0;
    int number_of_digits = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        int digit = number % 10;
        sum_of_digits += digit * digit * digit;
        number /= 10;
        number_of_digits++;
    }
    if (sum_of_digits == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
}