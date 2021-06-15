// 6. Write a program in C to enter marks of 5 subject and find average of all marks then print marks that is greater than average marks of a student.

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
    
    printf("average = %d \n", avg);

    for (i = 0; i <= 4; i++)
    {
        if (marks[i]> avg)
        {
            printf("%d ",marks[i]);
        }
        
    }
    printf("are greater than average");
}


/*
Output:
enter marks of five subject
85
56
96
29
56
average = 64
85 96 are greater than average
*/