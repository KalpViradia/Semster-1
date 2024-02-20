#include<stdio.h>

void main()
{
    int number;
    printf("Enter an integer :");
    scanf("%d",&number);
 
    if((number & 1) == 0){
        printf("Even");
    }
    else{
        printf("Odd");
}
  

}