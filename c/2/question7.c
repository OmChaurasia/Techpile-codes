// WAP to convert centigrade temperature into Fahrenheit temperture

#include <stdio.h>
#include <conio.h>
void main()
{
    float c, f;
    c = 37;
    f = c * 1.8 + 32;
    printf("%.1f centigrade is equal to : %.2f fahrenheit", c, f);
}