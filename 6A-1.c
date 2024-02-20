#include<stdio.h>
int main(){
    int a,b,ans;
    char choice;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("Enter the value of b");
    scanf("%d",&b);
    printf("Enter your choice of operation");    
    scanf(" %c",&choice);
    if(choice=='+')
    {
        ans=a+b;
       
    }
    else if(choice=='-')
    {
        ans=a-b;
    }
    else if(choice=='*')
    {
        ans=a*b;
    }
    else if(choice=='/')
    {
        ans=a/b;
    }
        printf("Ans of %d and %d is:%d",a,b,ans);
    return 0;
}