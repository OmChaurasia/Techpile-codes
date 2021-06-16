#include<stdio.h>
#include<conio.h>
void main(){
    int num1, num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    if ((num1 % num2)==0){
        printf("the numbers are divisible");
    }
    else{
        printf("the numbers are not divisible");
    }
}