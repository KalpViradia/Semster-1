#include <stdio.h>
void main() {
    int arr1[100],arr2[100],i,n;
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++) {
        arr2[i]=arr1[i];
    }
    printf("Elements of new array are: ");
    for(i=0;i<n;i++) {
        printf("%d",arr2[i]);
    }
}