// 5. Write a C program to check whether a character is uppercase or lowercase alphabet.
#include <stdio.h>
#include <conio.h>
void main()
{
    char a;
    printf("Enter a character\n");
    scanf(" %c", &a);
    if (a < 91)
    {
        printf("uppercase");
    }
    else
    {
        printf("lowercase");
    }
}