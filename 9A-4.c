#include <stdio.h>
void main() {
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact = 1;
    i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, fact);
}