#include <stdio.h>
void main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {0, 0, 0, 0, 0};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    for (int *ptr = arr1; ptr < arr1 + n; ptr++) {
        *(arr2 + (ptr - arr1)) = *ptr;
    }
    printf("Elements in the second array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
}