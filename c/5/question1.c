// WAP to input three number and find greatest within all three.

#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter the number\n");
    scanf("%d", &b);
    printf("Enter the number\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greatest\n", b);
    }
    else
    {
        printf("%d is greatest\n", c);
    }
}