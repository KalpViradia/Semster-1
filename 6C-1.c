#include <stdio.h>
void main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3) {
        if (num2 > num3) {
            printf("The second largest number is %d.\n", num2);
        } else {
            printf("The second largest number is %d.\n", num3);
        }
    } 
     else if (num2 > num1 && num2 > num3) {
        if (num1 > num3) {
            printf("The second largest number is %d.\n", num1);
        } else {
            printf("The second largest number is %d.\n", num3);
        }
    } else if (num3 > num1 && num3 > num2) {
        if (num1 > num2) {
            printf("The second largest number is %d.\n", num1);
        } else {
            printf("The second largest number is %d.\n", num2);
        }
    } else {
        printf("All three numbers are equal.\n");
    }
}