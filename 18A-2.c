#include<stdio.h>
int maxmin(int a,int b);
void main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Maximum is %d and Minimum is %d",maxmin(a,b));
}
int maxmin(int a,int b){
    if (a>b){
        return a,b;
    }
    else {
        return b,a;
    }
}