#include<stdio.h>
void swap_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_value function: a = %d, b = %d\n", a, b);
}
void swap_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap_value(num1, num2);
    printf("After swapping by value: num1 = %d, num2 = %d\n", num1, num2);
    swap_reference(&num1, &num2);
    printf("After swapping by reference: num1 = %d, num2 = %d\n", num1, num2);
}