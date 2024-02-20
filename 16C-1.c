#include <stdio.h>
#include <stdlib.h>
#define MAX_ROWS 100
#define MAX_COLS 100
void main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int i, j;
    int num_zeroes = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                num_zeroes++;
            }
        }
    }
    if (num_zeroes > (rows * cols) / 2) {
        printf("The matrix is sparse.\n");
    } else {
        printf("The matrix is not sparse.\n");
    }
}