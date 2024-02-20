#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,d;
    float root1,root2,realpart1,imaginary;
    printf("Enter value for a :");
    scanf("%d",&a);
    printf("Enter value for b :");
    scanf("%d",&b);
    printf("Enter value for c :");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(+b+sqrt(d))/(2*a);
        printf("two diff roots %d %d",root1,root2);
    }
    else if(d==0){
        root1=root2=-b/(2*a);
        printf("two diff roots %d %d",root1,root2);
    }
    else{
        realpart1=-b/(2*a);
        imaginary=sqrt(-d)/(2*a);
        printf("two diff roots %d %d",realpart1,imaginary);
    }
}