#include <stdio.h>
void main() {
    int num1, num2, num3, average;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3;
    printf("Average of %d, %d and %d is: %d\n", num1, num2, num3, average);
}