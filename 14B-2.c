#include <stdio.h>
#include <math.h>
void main() {
    int n, i;
    float sum = 0.0, product = 1.0, invSum = 0.0, avg, gmean, hmean;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
        product *= arr[i];
        invSum += 1.0 / arr[i];
    }
    avg = sum / n;
    gmean = pow(product, 1.0/n);
    hmean = n / invSum;
    printf("Average: %.2f\n", avg);
    printf("Geometric Mean: %.2f\n", gmean);
    printf("Harmonic Mean: %.2f\n", hmean);
}