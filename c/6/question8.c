// Write a program to ask the user to input numbers for 5 times and print square of that
// number.
#include <stdio.h>
#include <conio.h>
void main()
{
    int num[5], i;
    printf("Enter the numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("Square of %d is %d\n",num[i],num[i]*num[i]);
    }
    
}