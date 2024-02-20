#include <stdio.h>
void main() {
    int start, end;
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);
    if(start % 2 != 0) {
        start++;
    }
    while(start <= end) {
        printf("%d ", start);
        start += 2;
    }
}
