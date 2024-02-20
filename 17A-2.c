#include <stdio.h>
void main() {
    int i = 10;
    float f = 20.5;
    double d = 30.5;
    char c = 'a';
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;
    char *cp = &c;
    printf("Value of i: %d\n", *ip);
    printf("Value of f: %f\n", *fp);
    printf("Value of d: %lf\n", *dp);
    printf("Value of c: %c\n", *cp);
    printf("Address of i: %p\n", ip);
    printf("Address of f: %p\n", fp);
    printf("Address of d: %p\n", dp);
    printf("Address of c: %p\n", cp);
}