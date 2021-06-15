#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            printf("%d %d\n", i, j);
        }
    }
}


// ouput:
/*
1 5
1 4
1 3
1 2
1 1
2 5
2 4
2 3
2 2
2 1
3 5
3 4
3 3
3 2
3 1
4 5
4 4
4 3
4 2
4 1
5 5
5 4
5 3
5 2
5 1
*/