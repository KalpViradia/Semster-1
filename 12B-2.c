#include <stdio.h>
void main() {
    int n, i, j;
    double e = 1.0, fact = 1.0;
    printf("Enter the number of terms to approximate (greater than 1): ");
    scanf("%d", &n);
    for(i=1; i<n; i++) {
        fact *= i;
        e += 1/fact;
    }
    printf("The estimated value of e is: %.10f\n", e);
}