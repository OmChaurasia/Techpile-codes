// WAP to find simple interest by accepting principal, time and rate values

#include <stdio.h>
#include <conio.h>
void main()
{
    int t, r, p, i;
    t = 2;
    r = 5;
    p = 1000;
    i = (p * r * t) / 100;
    printf("The interest of %d principal on %d rate for %d years is : %d", p, r, t, i);
}