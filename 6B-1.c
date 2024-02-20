#include <stdio.h>
void main()
{
    double unit, charge, surcharge, total;
    printf("Enter the electricity unit charge: ");
    scanf("%lf", &unit);
    if (unit < 0)
    {
        printf("Invalid unit.\n");
        return 0;
    }
    if (unit <= 50)
        charge = unit * 0.50;
    else if (unit <= 150)
        charge = 25 + (unit - 50) * 0.75;
    else if (unit <= 250)
        charge = 100 + (unit - 150) * 1.20;
    else
        charge = 220 + (unit - 250) * 1.50;
    surcharge = charge * 0.20;
    total = charge + surcharge;
    printf("The total electricity bill is Rs. %.2lf.\n", total);
}