#include<stdio.h>
int factorial(int n) {
    if(n == 1)
        return 1;
    else
        return n*factorial(n-1);
}
void main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf("Factorial of %d = %d", num, factorial(num));
}