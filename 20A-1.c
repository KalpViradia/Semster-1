#include <stdio.h>
struct Employee {
    char name[50];
    int employeeid;
    int age;
    float salary;
};
void main() {
    struct Employee emp = {"Meet",101, 27, 50000.0};
    printf("Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.employeeid);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);
}