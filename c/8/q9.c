// WAP to enter n size of array (ask value of N from user). Then search a given number is present in array or not.

#include<stdio.h>
#include<conio.h>
void main(){
    int size, i, search,index=-1;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int n[size];
    
    printf("Enter the values of array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Enter the number you want to search : ");
    scanf("%d",&search);
    for ( i = 0; i < size; i++)
    {
        if (n[i]==search){
            index=i;
        }
    }
    if (index==-1){
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at : %d\n",index);
    }
    
}