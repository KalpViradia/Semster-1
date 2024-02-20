#include <stdio.h>
void main() {
    int x, y, i, product = 1;
    scanf(" %d %d", &x, &y);
    for (i = 1; i <= y; i++) {
        product = product + x;
    }
    printf(" %d ", product);
}