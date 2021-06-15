// WAP to input total monthly income of your father and print annual income with 10% reward

#include <stdio.h>
#include <conio.h>
void main()
{
    int mincome, yincome, reward = 10;
    printf("Enter monthly income of your father\n");
    scanf("%d", &mincome);

    yincome = (mincome * 12) + ((mincome * 12) * reward / 100);

    printf("Your father's yearly income with reward is %d", yincome);
}