// Write a program to input a number and print numbers from inputted number to 50.

#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (num; num <= 50; num++)
    {
        printf("%d ", num);
    }
}