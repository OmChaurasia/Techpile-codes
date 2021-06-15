// 1. WAP to input 10 numbers of array and count positive and negative numbers of array elements.

#include<stdio.h>
#include<conio.h>
void main(){
    int n[10],i, pos, neg;
    pos=neg=0;
    printf("Enter the elements of array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&n[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if(n[i]<0){
            neg++;
        }
        else
        {
            pos++;
        }
    }
    printf("%d elements are positive\n",pos);
    printf("%d elements are negative\n",neg);
    
}