#include <stdio.h>
void main() {
    int num, oddCount = 0, evenCount = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("The number of odd numbers is: %d\n", oddCount);
    printf("The number of even numbers is: %d\n", evenCount);
}