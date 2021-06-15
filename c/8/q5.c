//  Write a program to find maximum and minimum in the given list of n numbers.

#include<stdio.h>
#include<conio.h>
void main(){
    int max, min;
    int n[]={34,56,67,23,12};
    max=n[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < n[i]){
            max=n[i];
        }
    }
    min=n[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > n[i]){
            min=n[i];
        }
    }
    printf("maximum is %d\n",max);
    printf("minimum is %d",min);
    
}