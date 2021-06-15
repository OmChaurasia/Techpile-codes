// WAP to input two number and input operation in (+,-,*,/,%) and perform operation on
// two values based on the inputted operation symbol by using else-if ladder and switch
// statement.
#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2;
    char a;
    printf("Enter the numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("Enter the operation you want to perform\n");
    scanf(" %c", &a);
    switch (a)
    {
    case '+':
        printf("%d + %d = %d", num1, num2 ,num1+num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2 ,num1-num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2 ,num1*num2);
        break;
    case '/':
        printf("%d / %d = %d", num1, num2 ,num1/num2);
        break;
    case '%':
        printf("%d % %d = %d", num1, num2 ,num1%num2);
        break;
    
    default:
    printf("wrong operation");
        break;
    }

}