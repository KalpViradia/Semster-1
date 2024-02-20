#include <stdio.h>
void main() {
    int n, i, a = 0, b = 1, c, count;
    scanf(" %d ", &count);
    printf(" %d%d ", a, b);
    for (i = 2; i < count; i++) {
        c = a + b;
        printf(" %d ", c);
        a = b;
        b = c;
    }
}