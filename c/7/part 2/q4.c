/*
a
b b
c c c
d d d d
e e e e e
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (i = 97; i <= 101; i++)
    {
        for (j = 97; j <= i; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
}