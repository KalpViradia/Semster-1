#include <stdio.h>
void main() {
    int i, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}