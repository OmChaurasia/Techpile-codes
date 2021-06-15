// WAP to input a number and print table of that number

#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    
}