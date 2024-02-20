#include <stdio.h>
void main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Normal order: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nReverse order: ");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}