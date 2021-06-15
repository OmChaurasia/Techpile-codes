#include <stdio.h>
int main()
{
    int d, a = 1;
    d = ++a + ++a + a-- + ++a;
    printf("%d %d", d, a);
}

/*

Output :
12 3

*/