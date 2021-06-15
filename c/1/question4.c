#include <stdio.h>
#include <conio.h>

void add();
void subtract();
void multiply();

void add()
{
    int a = 10, b = 4;
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}

void subtract()
{
    int a = 10, b = 4;
    printf("The subtraction of %d and %d is %d\n", a, b, a - b);
}

void multiply()
{
    int a = 10, b = 4;
    printf("The multiplication of %d and %d is %d\n", a, b, a * b);
}

void main()
{
    add();
    subtract();
    multiply();
}