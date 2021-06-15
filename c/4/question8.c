#include<stdio.h>
#include<conio.h>
void main(){
    int quantity, rate, total;
    printf("enter the quantity");
    scanf("%d",&quantity);
    printf("enter the rate");
    scanf("%d",&rate);
    total=quantity*rate;
    if (quantity>1000){
        total=total+((total*10)/100);
    }
    printf("the total is : %d", total);
}

/*
Output:
enter the quantity200
enter the rate100
the total is : 20000
*/