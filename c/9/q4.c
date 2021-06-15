// WAP to input 5 elements of array and input a value at desired position of array 
#include<stdio.h>
#include<conio.h>
int main(){
    int n[10], num, pos;
    printf("Enter the 5 elements of array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Enter new elements to insert in array\n");
    scanf("%d",&num);
    printf("Enter position to insert\n");
    scanf("%d",&pos);
    for (int i = 5; i >= pos-1; i--)
    {
        n[i+1]=n[i];
        if (i==pos-1){
            n[i]=num;
        }
    }
    printf("Final Array is :\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",n[i]);
    }
    return 0;
}