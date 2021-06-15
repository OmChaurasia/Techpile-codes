// Write a C program to find and print the square of each one of the even values from 1 to a
// specified value
#include<stdio.h>
#include<conio.h>
void main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        printf("Square of %d is %d\n",i,i*i);
    }
    
}