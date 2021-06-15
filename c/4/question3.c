#include <stdio.h>
#include <conio.h>

void main()
{
    int marks;
    printf("enter your marks");
    scanf("%d", &marks);
    if (marks >= 35)
    {
        printf("Your result is pass");
    }
    else
    {
        printf("Your result is fail");
    }
}

/*
Output :
enter your marks40
Your result is pass
*/