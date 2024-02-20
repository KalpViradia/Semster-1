#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *array = (int*)calloc(n, sizeof(int));
    printf("Enter the %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += array[i];
    }
    free(array);
    printf("Sum: %d\n", sum);
    return 0;
}