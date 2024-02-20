#include <stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Swapped value of a and b: %d, %d\n", a, b);
}