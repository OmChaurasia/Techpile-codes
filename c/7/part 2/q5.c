/*
a b c d e
a b c d
a b c
a b
a
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (i = 101; i >= 97; i--)
    {
        for (j = 97; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
}