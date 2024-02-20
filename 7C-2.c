#include <stdio.h>
void main() {
  int year, month;
  printf("Enter the year and month: ");
  scanf("%d %d", &year, &month);
  int days;
  switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      days = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      days = 30;
      break;
    case 2:
      if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days = 29;
      } else {
        days = 28;
      }
      break;
    default:
      printf("Invalid month\n");
  }
  printf("The number of days in %d/%d is %d\n", month, year, days);
}