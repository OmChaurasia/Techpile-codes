#include <stdio.h>
#include <conio.h>

void main()
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    if (year%4==0)
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not leap year",year);
    }
}

/*

Output :
enter the year
2020
2020 is leap year
*/