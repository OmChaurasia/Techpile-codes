#include <stdio.h>
#include <conio.h>
void main()
{
    int rollno, m1, m2, m3, per, mm = 300;
    printf("Enter your rollno\n");
    scanf("%d", &rollno);
    printf("Enter marks of subject 1\n");
    scanf("%d", &m1);
    printf("Enter marks of subject 2\n");
    scanf("%d", &m2);
    printf("Enter marks of subject 3\n");
    scanf("%d", &m3);
    per = ((m1 + m2 + m3) * 100) / mm;
    printf("your percentage is %d\n", per);
    if (per > 80)
    {
        printf("your division is first\n");
    }
    else if (per > 60)
    {
        printf("your division is second\n");
    }
    else
    {
        printf("your division is third");
    }
}