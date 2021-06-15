// Write a C program to print all numbers between 1 to 100 which divided by 5 and the
// remainder will be 3
#include <stdio.h>
#include <conio.h>
void main()
{
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 5 == 0) && (i % 3 != 0))
        {
            printf("%d ",i);
        }
    }
}