#include <stdio.h>
#include <math.h>

int main(void)
{
    double a = 0, n = 1, x;
    do
    {
        x = (1/pow(2,n))+(1/pow(3,n));
        n++;
        a = a+x;
        if(x<=0.0001)
        printf ("a = %lf\n", a);
    }
    while (x>=0.0001);
}