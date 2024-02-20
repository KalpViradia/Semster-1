#include <stdio.h>
void main() {
    int num, sum = 0, count = 0;
    float avg;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
        count++;
        printf("Do you want to enter another number (Y/N)? ");
        scanf(" %c", &choice);
    } while(choice == 'Y' || choice == 'y');
    avg = (float)sum / count;
    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the numbers is: %.2f\n", avg);
}