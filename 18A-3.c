#include<stdio.h>
float simple_interest(float p,float r,float t) {
    return (p*r*t)/100;
}
void main(){
    float principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    interest = simple_interest(principal, rate, time);
    printf("Simple Interest = %.2f\n", interest);
}