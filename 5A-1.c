#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter integer value for a:");
    scanf("%d",&a);
    printf("Enter integer value for b:");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("%d %d",a,b);
}