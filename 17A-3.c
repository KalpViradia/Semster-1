#include <stdio.h>
void main() {
    int num1,num2,sum;
    int *ptr1 = &num1, *ptr2 = &num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    sum = *ptr1 + *ptr2;
    printf("Sum of %d and %d is %d\n", num1, num2, sum);
}