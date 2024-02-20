#include <stdio.h>
void main(){
    int a,b;
    printf("Enter an integer value : ");
    scanf("%d",&a);
    b=a%10;
    if(b%2==0){
        printf("Last digit of the number is even");
    }    
    else{
        printf("Last digit of the number is odd");
    }
}