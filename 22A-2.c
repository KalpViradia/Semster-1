#include <stdio.h>
#include <stdlib.h>
int calculateSum(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int* arr = (int*) malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = calculateSum(arr, n);
    printf("Sum of elements is: %d\n", sum);
    free(arr);
    return 0;
}