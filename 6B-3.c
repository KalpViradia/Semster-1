#include <stdio.h>
void main() {
    int s1,s2,s3;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    if (s1 == s2 && s2 == s3) {
        printf("The triangle is an equilateral triangle.\n");
    } 
    else if (s1 == s2 || s2 == s3 || s1 == s3) {
        printf("The triangle is an isosceles triangle.\n");
    }
    else if(s3*s3==s1*s1+s2*s2 || s1*s1==s2*s2+s3*s3 || s2*s2==s3*s3+s1*s1){
        printf("The triangle is a right-angled triangle.\n");
     }
    else {
        printf("The triangle is a scalene triangle.\n");
    }
}