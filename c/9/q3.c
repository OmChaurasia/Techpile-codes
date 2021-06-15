// Write a program in C to input 10 elements of array and print only those elements of array which present only one time.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n[10], i, j, search;
    int new[10];
    printf("Enter the elements of array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("Final array Elements are\n");
    for (int i = 0; i < 10; i++)
    {
        search=0;
        for (int j = 0; j < 10; j++)
        {
            if (n[i]==n[j]){
                search++;
            }
        }
        if (search==1){
            printf("%d\n",n[i]);
        }
    }

    return 0;
}