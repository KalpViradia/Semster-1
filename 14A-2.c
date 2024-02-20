#include <stdio.h>
void main() {
    int n, i, posCount = 0, negCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) {
            posCount++;
        } else if(arr[i] < 0) {
            negCount++;
        }
    }
    printf("Number of positive numbers: %d\n", posCount);
    printf("Number of negative numbers: %d\n", negCount);
}