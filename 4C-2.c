#include <stdio.h>
void main() {
  int days, years, weeks, days_remaining;
  printf("Enter the number of days: ");
  scanf("%d", &days);
  years = days / 365;
  weeks = (days % 365) / 7;
  days_remaining = (days % 365) % 7;
  printf("The number of years, weeks, and days is: %d years, %d weeks, and %d days.\n", years, weeks, days_remaining);
}