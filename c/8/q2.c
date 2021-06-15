#include <stdio.h>
#include <conio.h>
void main()
{
    int marks[5], i, tot = 0, avg;
    printf("enter marks of five subject \n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        tot = tot + marks[i];
    }
    avg = tot / 5;
    printf("total marks = %d \n", tot);
    printf("average = %d \n", avg);
}

/*
Output:
enter marks of five subject
60
75
78
63
91
total marks = 367
average = 73
*/