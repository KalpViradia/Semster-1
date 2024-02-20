#include <stdio.h>
void main() {
    int height, base, area;
    printf("Enter height of triangle: ");
    scanf("%d", &height);
    printf("Enter base of triangle: ");
    scanf("%d", &base);
    area = (height * base) / 2;
    printf("Area of triangle with height %d and base %d is: %d\n", height, base, area);
}