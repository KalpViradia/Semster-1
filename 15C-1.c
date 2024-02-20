#include <stdio.h>
void main() {
    int i,arr[100],n,largest1=arr[0],largest2=arr[1];
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for (i=2;i<n;i++) {
        if (arr[i]>largest1) {
            largest2=largest1;
            largest1=arr[i];
        } else if (arr[i]>largest2) {
            largest2=arr[i];
        }
    }
    printf("The two largest elements are %d and %d\n",largest1,largest2);
}