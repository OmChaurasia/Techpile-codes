#include<stdio.h>
#include<conio.h>
void main(){
    int gst,order,price, total_price;
    gst=18;
    printf("how many cups of coffees Ram ordered\n");
    scanf("%d",&order);
    printf("enter the price of per cup of coffees\n");
    scanf("%d",&price);
    total_price=(order*price)+((order*price)*gst/100);
    printf("amount that Ram have to pay is %d\n",total_price);
}