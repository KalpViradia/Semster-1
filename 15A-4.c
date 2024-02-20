#include <stdio.h>
void main() {
    int i,n,arr[100],searchElement=3,found=0;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the value for array element arr[%d]",i);
        scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++) {
        if(arr[i]==searchElement) {
            printf("Element %d found at position %d\n",searchElement,i+1);
            found=1;
            break;
        }
    }
    if(!found) {
        printf("Element %d not found in the array\n",searchElement);
    }
}