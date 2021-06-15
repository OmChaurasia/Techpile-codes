// Write a C program that prints all even numbers between 1 and 50 .

#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    printf("All the even numbers between 1 and 50 are :\n");
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}