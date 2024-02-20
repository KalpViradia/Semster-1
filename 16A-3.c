#include <stdio.h>
void main() {
    int i,roll_no[20],marks[20];
    for (i = 0; i < 20; i++) {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &roll_no[i]);
        printf("Enter the marks of student %d\n: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("Roll No.\tMarks\n");
    for (i = 0; i < 20; i++) {
        printf("%d\t%d\n", roll_no[i], marks[i]);
    }
}