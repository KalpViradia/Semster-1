#include <stdio.h>
void swap(int *arr1, int *arr2, int n) {
    for (int *ptr = arr1; ptr < arr1 + n; ptr++) {
        *(arr2 + (ptr - arr1)) = *ptr;
    }
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {0, 0, 0, 0, 0};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    swap(arr1, arr2, n);
    printf("Elements in the second array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
}