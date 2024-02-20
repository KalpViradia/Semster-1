#include <stdio.h>
void main() {
    int n, i, count = 0;
    scanf(" %d ", &n);
    for (i = 0; i <= 9; i++) {
        if (n % 10 == i) {
            count++;
        }
        n = n / 10;
    }
    printf(" %d ", count);
}