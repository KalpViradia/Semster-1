#include <stdio.h>
void main() {
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
  printf("The number is %s\n", x % 2 == 0 ? "Even" : "Odd");
}