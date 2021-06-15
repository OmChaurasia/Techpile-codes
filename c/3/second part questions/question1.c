#include<stdio.h>
#include<conio.h>

void main(){
    float w1, num1, w2, num2, avgval;
    printf("Enter the weight of first item \n"); 
    scanf("%f",&w1);
    printf("Enter the numbers of first item \n"); 
    scanf("%f",&num1);
    printf("Enter the weight of second item\n"); 
    scanf("%f",&w2);
    printf("Enter the numbers of second item\n"); 
    scanf("%f",&num2);
    avgval = ((w1*num1)+(w2*num2))/(num1+num2);
    printf("The average value is : %f",avgval);
}