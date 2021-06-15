#include <stdio.h>
int main()
{
    int d, a = 1, b = 2;
    d = ++a + a++ + ++b;
    printf("%d %d %d", d, a, b);
}

/*

Output :
8 3 3

*/
