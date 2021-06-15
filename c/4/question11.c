#include <stdio.h>
#include <conio.h>
void main()
{
    float unit, amount;
    printf("Enter the unit\n");
    scanf("%f", &unit);
    if (unit < 200)
    {
        amount = unit * 1.2;
    }
    else if (unit < 400)
    {
        amount = unit * 1.5;
    }
    else if (unit < 600)
    {
        amount = unit * 1.8;
    }
    else
    {
        amount = unit * 2;
    }
    printf("Your bill amount is %f", amount);
}