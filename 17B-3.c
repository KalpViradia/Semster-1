#include <stdio.h>

void addMatrices(int *firstMatrix, int *secondMatrix, int *result, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            *result = *firstMatrix + *secondMatrix;
            result++;
            firstMatrix++;
            secondMatrix++;
        }
    }
}

int main() {
    int firstMatrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int secondMatrix[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];
    int rows = 3;
    int columns = 3;

    addMatrices(&firstMatrix[0][0], &secondMatrix[0][0], &result[0][0], rows, columns);

    printf("Result matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}