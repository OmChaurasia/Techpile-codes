#include <stdio.h>
void main()
{
    int a, b, c, max;
    printf("\n Enter 3 numbers");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("Largest No is %d", max);
}


/*
Output :
 Enter 3 numbers5 6 7
Largest No is 7
*/