#include<stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;
    return 1;
}
int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    float result = 0.0;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum%10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    return (int)result == num;
}
int isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;  
    }
    return sum == num;
}