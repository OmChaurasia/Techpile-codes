// 6. Write a C program to input basic salary of an employee and calculate its Gross salary
// according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
#include<conio.h>
void main(){
    float bs, gs,da,hra;
    printf("Enter your basic salary\n");
    scanf("%f",&bs);
    if (bs<=10000)
    {
        da= (bs*80)/100;
        hra= (bs*20)/100;

    }
    else if (bs<=20000)
    {
        da= (bs*90)/100;
        hra= (bs*25)/100;
    }
    else if (bs>20000)
    {
        da= (bs*95)/100;
        hra= (bs*30)/100;
    }
    
    gs= da + hra + bs;
    printf("Total salary is %.2f",gs);
    
}