#include<stdio.h>
float max_of_three(float num1, float num2, float num3) {
    float max = num1;
    if(num2 > max)
        max = num2;
    if(num3 > max)
        max = num3;
    return max;
}
void main() {
    float number1, number2, number3, maximum;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &number1, &number2, &number3);
    maximum = max_of_three(number1, number2, number3);
    printf("Maximum = %.2f\n", maximum);
}