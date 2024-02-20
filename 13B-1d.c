#include <stdio.h>
void main() {
    int i, j, num = 1;
    char ch = 'A';
    for(i = 1; i <= 5; i++) {
        for(j = 5; j > i; j--) {
            printf(" ");
        }
        if(i % 2 != 0) {
            for(j = 1; j <= i; j++) {
                printf("%d ", num);
                num++;
            }
        } else {
            for(j = 1; j <= i; j++) {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }
}