#include <stdio.h>
void main() {
    int arr[100], i, j, n, count = 0;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is : %d", count);
}