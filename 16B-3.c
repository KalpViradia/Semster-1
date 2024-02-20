#include <stdio.h>
void main() {
    int a[3][3],i,j,sum = 0;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The diagonal elements of the matrix are:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf("\nThe sum of the diagonal elements is: %d\n", sum);
}