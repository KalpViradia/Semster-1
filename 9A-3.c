#include <stdio.h>
void main() {
    int x, y, i, product = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    for (i = 1; i <= y; i++) {
        product *= x;
    }
    printf("The product of %d and %d is %d\n", x, y, product);
}