#include <stdio.h>
#include <conio.h>
#include<string.h>
#include<ctype.h>
void bubble(char arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        int flag = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
void main()
{

    char n[50];
    int size;
    printf("Enter your name\n");
    gets(n);
    
    size=strlen(n);
    for (int i = 0; i < size; i++)
    {
        n[i]=tolower(n[i]);
    }
    
    bubble(n, size);
    puts(n);
    getch();
}