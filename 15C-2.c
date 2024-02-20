#include <stdio.h>
void main() {
    int i,pos=0,arr[100],n=5,num=3;
    printf("Original array: ");
    for (i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    while (num>arr[pos]&&pos<n) {
        pos++;
    }
    for (i=n;i>pos;i--) {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    n++;
    printf("\nArray after inserting %d: ",num);
    for (i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
}