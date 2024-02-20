#include <stdio.h>
void main() {
    int fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);
    celsius = ((fahrenheit - 32) * 5) / 9;
    printf("Temperature in Celsius for Fahrenheit %d is: %d\n", fahrenheit, celsius);
}