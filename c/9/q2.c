// 2. WAP to enter 5-5 elements in two different array and print sum of all numbers of both array index wise.

#include<stdio.h>
#include<conio.h>
void main(){
    int n1[5],n2[5],sum[5];
    printf("Enter the elements of first array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&n1[i]);
    }
    printf("Enter the elements of Second array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&n2[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum[i]=n1[i]+n2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Sum of index %d is %d\n",i,sum[i]);
    }

}