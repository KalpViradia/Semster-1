#include <stdio.h>
struct Student {
    char name[50];
    float percentage;
    int age;
};
void main() {
    struct Student students[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter name, percentage, and age for student %d:\n", i+1);
        scanf("%s %f %d", students[i].name, &students[i].percentage, &students[i].age);
    }
    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n", students[i].age);
    }
}