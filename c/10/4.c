#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char n[50];
    int words=1 ,len;
    printf("Enter your name\n");
    gets(n);
    len =strlen(n);
    for (int i = 0; i < len; i++)
    {
        if(n[i] == 32){
            words++;
        }   
    }
    printf("Ther are %d words in name", words);
    return 0;
}