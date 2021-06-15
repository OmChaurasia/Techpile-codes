#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char n[50];
    int size , count=0;
    printf("Enter your name\n");
    gets(n);
    size= strlen(n);
    for (int i = 0; i < size; i++)
    {
        n[i]=tolower(n[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (n[i]==97)
        {
            count++;
        }
        
    }
    printf("a is present %d times",count);
    return 0;
}