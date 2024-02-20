#include <stdio.h>
void main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  int xor;
  xor = a ^ b;
  if (xor == 0) {
    printf("The numbers are equal\n");
  } else {
    printf("The numbers are not equal\n");
  }
}