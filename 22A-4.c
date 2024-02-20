#include <stdio.h>
#include <stdlib.h>
struct Student {
    int id;
    char name[50];
    float marks;
};
int main() {
    struct Student *student = (struct Student *) malloc(sizeof(struct Student));
    student->id = 1;
    strcpy(student->name, "John Doe");
    student->marks = 85.5;
    printf("ID: %d\n", student->id);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
    free(student);
    return 0;
}