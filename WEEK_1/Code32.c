/*
The natural logarithm can be approximated by the following series.

(x - 1)/x + 1/2 * ((x - 1)/x) ^ 2 + 1/2 * ((x - 1)/x) ^ 3 + 1/2 * ((x - 1)/x) ^ 4 +...

If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float x,d,p,r,res=0;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    d=(x-1)/x;
    
    for(i=2;i<=7;i++)
    {
        p = pow(d,i);
        r = p/2;
        res = res + r;
    }
   
    res = d + res;
    printf("Result: %f",res);
}
/*OUTPUT:
Enter the value of x: 3
Sum of the first seven terms of the series:1.274806*/