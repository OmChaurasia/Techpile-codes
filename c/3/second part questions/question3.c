#include<stdio.h>
#include<conio.h>
void main(){
    int totalsecond, hour, min, sec;
    printf("Enter total seconds\n");
    scanf("%d",&totalsecond);
    hour= totalsecond/3600;
    min= (totalsecond%3600)/60;
    sec= ((totalsecond%3600)%60);
    printf("%d hours, %d minutes, %d seconds",hour,min,sec);
}