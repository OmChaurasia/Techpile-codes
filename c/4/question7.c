#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    if (num<10)
    {
        printf("%d is less than 10",num);
    }
    else
    {
        printf("%d is greater than 10",num);
    }
}

/*

Output :
enter the number
5
5 is less than 10
*/