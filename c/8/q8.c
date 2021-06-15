//  WAP to enter 10 elements of array and then enter a value that is the index which element user wants to delete. Print final array after deleting value.

#include<stdio.h>
#include<conio.h>
void main (){
    int  i, index;
    int n[10];
    printf("Enter 10 elements of array\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Enter index that you want to delete : ");
    scanf("%d",&index);
    for ( index ; index < 10; index++)
    {
        n[index]=n[index+1];

    }
    for ( i = 0; i < 9; i++)
    {
        printf("%d\n",n[i]);
    }
    
}

/*
Output:
Enter 10 elements of array
5
6
7
8
9
10
11
12
13
14
Enter index that you want to delete : 5
5
6
7
8
9
11
12
13
14
*/