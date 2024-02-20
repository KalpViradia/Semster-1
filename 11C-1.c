#include <stdio.h>
void main() {
    int num, firstDigit, lastDigit, swappedNumber;
    scanf(" %d ", &num);
    lastDigit = num % 10;
    while (num >= 10) {
        num = num / 10;
    }
    firstDigit = num;
    swappedNumber = lastDigit * 10 + (num % 10);
    printf(" %d ", swappedNumber);
}