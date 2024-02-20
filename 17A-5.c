#include <stdio.h>
void main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array are: ");
    for (int *ptr = arr; ptr < arr + n; ptr++) {
        printf("%d ", *ptr);
    }
}