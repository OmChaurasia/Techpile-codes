#include <stdio.h>
#include <conio.h>

void main()
{
    int k, num = 30;
    k = (num > 5 ? (num <= 10 ? 100 : 200) : 500);
    printf("%d", k);
}

/*

Output :
200

*/