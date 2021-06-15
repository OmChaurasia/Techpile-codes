// WAP to input your total marks in 10th class and print percentage

#include <stdio.h>
#include <conio.h>
void main()
{
    int tmm, tom;
    float per;
    tmm = 600;

    printf("Enter the total obtained marks you got in 10th class\n");
    scanf("%d", &tom);

    per = tom * 100 / tmm;
    printf("Your percentage is %.2f in 10th class", per);
}