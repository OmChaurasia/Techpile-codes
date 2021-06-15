// 7. Write a program to input any integer amount and count total number of notes.
// Ex : Amount = 3435
// Number of 2000 notes is : 1
// Number of 500 notes is : 2
// Number of 200 notes is : 2
// Number of 100 notes is : 0
// Number of 50 notes is : 0
// Number of 20 notes is : 1
// Number of 10 notes is : 1
// Number of 5 notes is : 1
// Number of 2 notes is : 0
// Number of 1 notes is : 0

#include <stdio.h>
#include <conio.h>
void main()
{
    int amount, n2000, n500, n200, n100, n50, n20, n10, n5, n2, n1;
    n2000=n500=n200=n100=n50=n20=n10=n5=n2=n1=0;
    printf("Enter the amount\n");
    scanf("%d",&amount);
    if (amount%2000>=0){
        n2000=amount/2000;
        amount=amount%2000;
    }
    
    if (amount%500>=0){
        n500=amount/500;
        amount=amount%500;
    }
    if (amount%200>=0){
        n200=amount/200;
        amount=amount%200;
    }
    
    if (amount%100>=0){
        n100=amount/100;
        amount=amount%100;
    }
    if (amount%50>=0){
        n50=amount/50;
        amount=amount%50;
    }
    
    if (amount%20>=0){
        n20=amount/20;
        amount=amount%20;
    }
    
    if (amount%10>=0){
        n10=amount/10;
        amount=amount%10;
    }
   
    if (amount%5>=0){
        n5=amount/5;
        amount=amount%5;
    }

    if (amount%2>=0){
        n2=amount/2;
        amount=amount%2;
    }
    if (amount%1>=0){
        n1=amount/1;
        amount=amount%1;
    }
    printf("Number of 2000 notes is : %d\n",n2000);
    printf("Number of 500 notes is : %d\n",n500);
    printf("Number of 200 notes is : %d\n",n200);
    printf("Number of 100 notes is : %d\n",n100);
    printf("Number of 50 notes is : %d\n",n50);
    printf("Number of 20 notes is : %d\n",n20);
    printf("Number of 10 notes is : %d\n",n10);
    printf("Number of 5 notes is : %d\n",n5);
    printf("Number of 2 notes is : %d\n",n2);
    printf("Number of 1 notes is : %d\n",n1);
}