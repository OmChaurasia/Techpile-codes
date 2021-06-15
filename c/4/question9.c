#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y;
    printf("enter the value of x\n");
    scanf("%d", &x);
    printf("enter the value of y\n");
    scanf("%d", &y);
    if ((x >= 0) && (y >= 0))
    {
        printf("First coordinates\n");
    }
    else if ((x < 0) && (y < 0))
    {
        printf("Third coordinates\n");
    }
    else if ((x < 0) && (y > 0))
    {
        printf("Second coordinates\n");
    }
    else
    {
        printf("Forth coordinates\n");
    }
}