// Write a C program that read 5 n and counts the number of positive n and print the average of all positive values.
#include <stdio.h>
int main()
{
    int i, n[5], total = 0, count = 0;
    float average;
    printf("\nInput the first number:");
    scanf("%d", &n[0]);
    printf("\nInput the second number:");
    scanf("%d", &n[1]);
    printf("\nInput the third number:");
    scanf("%d", &n[2]);
    printf("\nInput the fourth number:");
    scanf("%d", &n[3]);
    printf("\nInput the fifth number:");
    scanf("%d", &n[4]);
    for (i = 0; i < 5; i++)
    {
        if (n[i] > 0)
        {
            count++;
            total += n[i];
        }
    }
    average = total / count;
    printf("\n The number of positive n:%d\n", count);
    printf("\n The average of all positive value is %.2f\n", average);
    return 0;
}