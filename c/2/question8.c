// WAP to enter a value in inch and find centimeters in total inches

#include <stdio.h>
#include <conio.h>
void main()
{
    float inch, cm;
    printf("Enter the value in inch\n");
    scanf("%f", &inch);

    cm = inch * 2.54;
    printf("%.1f inches equal to %.1f centimeters", inch, cm);
}