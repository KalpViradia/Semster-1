#include <stdio.h>
void main() {
    int i, count = 0;
    float height[5], weight[5];
    printf("Enter the height and weight of 5 persons:\n");
    for(i = 0; i < 5; i++) {
        printf("Person %d (height weight): ", i+1);
        scanf("%f %f", &height[i], &weight[i]);
        if(height[i] > 170 && weight[i] < 50) {
            count++;
        }
    }
    printf("Number of persons with height > 170 and weight < 50: %d\n", count);
}