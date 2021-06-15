// WAP to input a number and check it is even or odd by using switch statement.
#include<stdio.h>
#include<conio.h>
void main(){
    int num,check;
    printf("Enter the number\n");
    scanf("%d",&num);
    check=num%2;
    switch (check)
    {
    case 0:
        printf("%d is even\n",num);
        break;
    
    default:
        printf("%d is odd\n",num);
        break;
    }

}