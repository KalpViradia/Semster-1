#include <stdio.h>
void main() {
  int num1, num2, choice;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Enter your choice of operation:\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  scanf("%d", &choice);
  switch(choice) {
    case 1:
      printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);
      break;
    case 2:
      printf("The difference of %d and %d is %d\n", num1, num2, num1 - num2);
      break;
    case 3:
      printf("The product of %d and %d is %d\n", num1, num2, num1 * num2);
      break;
    case 4:
      if (num2 != 0) {
        printf("The quotient of %d and %d is %.2f\n", num1, num2, (float)num1 / num2);
      } else {
        printf("Division by zero is not possible.\n");
      }
      break;
    default:
      printf("Invalid choice.\n");
      break;
   }
}