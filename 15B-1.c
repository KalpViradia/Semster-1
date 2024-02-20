#include <stdio.h>
void main() {
    int i,j=0,k,n,arr[100],temp[n],flag;
    temp[0]=arr[0];
    for (i=1;i<n;i++) {
        for (k=0;k<=j;k++) {
            if (arr[i]==temp[k]) {
                flag=1;
                break;
            }
        }
        if (flag==0) {
            j++;
            temp[j]=arr[i];
        }
    }
    printf("Array after removing duplicates: ");
    for (i=0;i<=j;i++) {
        printf("%d",temp[i]);
    }
}