// Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers

#include<stdio.h>
#include<conio.h>
void main(){
    int num,i;
    for ( i = 1; i <=5 ; i++)
    {
        printf("Enter the number\n");
        scanf("%d",&num);
        if (num<0){
            printf("%d is negative number\n",num);
        }
        else
        {
            printf("%d is positive number\n",num);
        }
        
    }
    
}