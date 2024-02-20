#include <stdio.h>
void main() {
    int principal, rate, time, simpleInterest;
    printf("Enter principal: ");
    scanf("%d", &principal);
    printf("Enter rate: ");
    scanf("%d", &rate);
    printf("Enter time: ");
    scanf("%d", &time);
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple interest for principal %d, rate %d and time %d is: %d\n", principal, rate, time, simpleInterest);
}