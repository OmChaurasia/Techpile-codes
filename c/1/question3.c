// WAP in C to print total, days, weeks months in 2.5 years
#include <stdio.h>
#include <conio.h>
void main()
{
    int months, weeks, days;
    float years = 2.5;

    months = years * 12;
    days = years * 365;
    weeks = days / 7;

    printf("There are %d days in %0.1f years\n", days, years);
    printf("There are %d weeks in %0.1f years\n", weeks, years);
    printf("There are %d months in %0.1f years\n", months, years);
}