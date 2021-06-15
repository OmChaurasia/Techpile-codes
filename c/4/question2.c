#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("enter a number to check even or odd");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
}

/*
Output :
enter a number to check even or odd8
the number is even
*/