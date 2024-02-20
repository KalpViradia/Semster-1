#include <stdio.h>
void main() {
    int i = 1, num = 1;
    while (i <= 50) {
        printf("%d ", num);
        num += 3;
        i++;
    }
    printf("\n");
}