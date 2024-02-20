#include <stdio.h>
void main() {
    int n, i, max, min;
    float sum = 0.0, avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if(i == 0) {
            max = min = arr[i];
        } else {
            if(arr[i] > max) {
                max = arr[i];
            }
            if(arr[i] < min) {
                min = arr[i];
            }
        }
    }
    avg = sum / n;
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);
}