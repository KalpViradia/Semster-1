#include <stdio.h>
void main() {
    int decimal_num, binary_num = 0, remainder, place = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);
    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        binary_num += remainder * place;
        place *= 10;
        decimal_num /= 2;
    }
    printf("The binary equivalent is: %d", binary_num);
}