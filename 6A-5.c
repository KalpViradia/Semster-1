#include<stdio.h>
void main(){
    int m1,m2,m3,m4,m5;
    float per;
    printf("Enter marks of paper1 :");
    scanf("%d",&m1);
    printf("Enter marks of paper2 :");
    scanf("%d",&m2);
    printf("Enter marks of paper3 :");
    scanf("%d",&m3);
    printf("Enter marks of paper4 :");
    scanf("%d",&m4);
    printf("Enter marks of paper5 :");
    scanf("%d",&m5);
    per=(m1+m2+m3+m4+m5)/(float)5;
    if(per<=35){
        printf("Fail");
    }
    if(per>35 && per<=45){
        printf("Pass Class");
    }
    if(per>45 && per<=60){
        printf("Second Class");
    }
    if(per>60 && per<=70){
        printf("First Class");
    }
    if(per>70){
        printf("Distinction");
    }
}