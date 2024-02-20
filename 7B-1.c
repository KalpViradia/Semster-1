#include <stdio.h>
void main() {
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);
  int max;
  switch (a > b) {
    case 1:
      max = a;
      break;
    case 0:
      max = b;
      break;
  }
  int product;
  product = max * c;
  printf("The product of the largest number from the first two numbers and the third number is %d\n", product);
}