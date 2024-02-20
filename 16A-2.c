#include <stdio.h>
void main() {
    int i,j,arr[3][3],positive=0,negative=0,zero=0;  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > 0) {
                positive++;
            } else if (arr[i][j] < 0) {
                negative++;
            } else {
                zero++;
            }
        }
    }
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);
}