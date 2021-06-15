#include<stdio.h>
#include<conio.h>

void main(){
    int hour, rupees, salary;
    printf("Enter the hours work done\n");
    scanf("%d",&hour);
    printf("Enter the amount per hour\n");
    scanf("%d",&rupees);
    salary=hour*rupees;
    printf("Salary is %d",salary);
}