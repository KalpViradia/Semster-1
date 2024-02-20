#include <stdio.h>
void main() {
    int n, i, count = 0;
    float sum = 0.0, avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    for(i = 0; i < n; i++) {
        if(arr[i] > avg) {
            count++;
        }
    }
    printf("Average: %.2f\n", avg);
    printf("Number of numbers higher than average: %d\n", count);
}