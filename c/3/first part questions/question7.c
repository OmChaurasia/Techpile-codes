#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    a = 10;
    b = ++a;
    c = a++;
    printf("a=%d, b=%d, c=%d", a, b, c);
    return 0;
}

/*

Output :
a=12, b=11, c=11

*/