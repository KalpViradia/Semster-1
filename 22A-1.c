#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *intPtr;
    char *charPtr;
    float *floatPtr;
    printf("Enter the size of integer array: ");
    scanf("%d", &n);
    intPtr = (int*) malloc(n * sizeof(int));
    if(intPtr == NULL) {
        printf("Error: Unable to allocate memory for int array.\n");
        exit(1);
    }
    printf("Enter the size of character array: ");
    scanf("%d", &n);
    charPtr = (char*) malloc(n * sizeof(char));
    if(charPtr == NULL) {
        printf("Error: Unable to allocate memory for char array.\n");
        exit(1);
    }
    printf("Enter the size of float array: ");
    scanf("%d", &n);
    floatPtr = (float*) malloc(n * sizeof(float));
    if(floatPtr == NULL) {
        printf("Error: Unable to allocate memory for float array.\n");
        exit(1);
    }
    free(intPtr);
    free(charPtr);
    free(floatPtr);
    return 0;
}