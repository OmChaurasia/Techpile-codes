#include<stdio.h>
#include<conio.h>

void main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if ((num % 7)==0){
        printf("Yes ! number is divisible by 7");
    }
    else
    {
        printf("No ! number is not divisible by 7");
    }
    
}

/*

Output :
enter the number
48
No ! number is not divisible by 7
*/