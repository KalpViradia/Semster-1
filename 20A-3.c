#include <stdio.h>
struct StructExample {
    int num;
    char ch;
};
union UnionExample {
    int num;
    char ch;
};
void main() {
    struct StructExample se;
    union UnionExample ue;
    se.num = 5;
    se.ch = 'A';
    ue.num = 5; 
    ue.ch = 'A'; 
    printf("In the structure:\n");
    printf("Number: %d\n", se.num);
    printf("Character: %c\n", se.ch);
    printf("\nIn the union:\n");
    printf("Number: %d\n", ue.num);
    printf("Character: %c\n", ue.ch);
}