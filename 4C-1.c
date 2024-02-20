#include<stdio.h>
void main(){
    int hour,min,sec;
    printf("Enter number of seconds : ");
    scanf("%d",&sec);
    hour=sec/3600;
    sec=sec%3600;
    min=sec/60;
    sec=sec%60;
    sec=sec%1;
    printf("Time is %d:%d:%d",hour,min,sec);
}