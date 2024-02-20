#include<stdio.h>
void fibbo(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
void main() {
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);
    fibbo(number);
}