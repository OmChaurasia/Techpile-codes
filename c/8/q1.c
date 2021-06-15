#include <stdio.h>
#include <conio.h>
void main()
{
    int n, c;
    long int f = 1;
    printf("\n Enter the number");
    scanf("%d", &n);
    if (n < 0)
        goto end;
    for (c = 1; c <= n; c++)
        f = f * c;
    printf("\n factorial = %d ", f);
    end:
    getch();
}

/*
output:
 Enter the number5

 factorial = 120
 */