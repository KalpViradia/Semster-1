#include <stdio.h>
#include <stdlib.h>
void main() {
    char numStr[20];
    int choice;
    printf("Enter a number: ");
    scanf("%s", numStr);
    printf("Enter 1 to convert to integer, 2 to convert to float: ");
    scanf("%d", &choice);
    if(choice == 1) {
        int numInt = atoi(numStr);
        printf("Converted to integer: %d\n", numInt);
    } else if(choice == 2) {
        float numFloat = atof(numStr);
        printf("Converted to float: %.2f\n", numFloat);
    } else {
        printf("Invalid choice\n");
    }
}