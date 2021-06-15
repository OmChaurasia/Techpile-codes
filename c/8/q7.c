// program to calculate sum of an array of all elements with size 10.
#include <stdio.h>
#include <conio.h>
void main()
{
    int  i, sum = 0;
    int n[]={46,89,47,58,86,24,15,57,85,45};
    
    for (i = 0; i <= 10; i++)
    {
        sum = sum + n[i];
    }
    
    printf("Sum = %d \n", sum);
    
}

