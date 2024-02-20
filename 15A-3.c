#include <stdio.h>
void main() {
    int i,n,arr[100],count=0;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value for array element arr[%d]",i);
        scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++) {
        if(arr[i]%3==0) {
            count++;
        }
    }
    printf("Total number of elements in array divisible by 3: %d\n",count);
}