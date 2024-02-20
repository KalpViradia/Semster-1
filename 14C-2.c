#include <stdio.h>
void main() {
    int arr[] = {1, 2, 4, 5, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int diff = arr[0] - 0;
    printf("Missing numbers are: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] - i != diff) {
            while(diff < arr[i] - i) {
                printf("%d ", diff + i);
                diff++;
            }
        }
    }
}