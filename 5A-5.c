#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of a");
	scanf("%d",&a);
	printf("Enter the value of b");
	scanf("%d",&b);
	printf("Enter the value of c");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("a is greater");
	}
	else{
	if(b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
}
}