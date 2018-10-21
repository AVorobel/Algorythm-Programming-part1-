#include <stdio.h>
#include <math.h>
#define M_E 2.718281
#define pi 3.141592

float factorial (float k)
{
    float f=1;
    for ( ;k>0;k--)
    {
        f = f*k;
    }
    return f;
}

int main()
{
    double x, y, SM = 0, SE = 0, m = 0;
    int n = 1;

    for(x=0.1 ; x<=1 ; x+=0.1)
    {
        y = pow(M_E,(x*cos(pi/4)))*(cos(x*sin(pi/4)));


        for(n=0 ; n<=25 ; n++)
        {
            m = (cos(n*(pi/4))/factorial(n))*(pow(x,n));
            SM += m;
        }

        do
        {
            m = (cos(n*(pi/4))/factorial(n))*(pow(x,n));
            SE += m;
        }
        while(fabs(m)>0.0001);

        printf("result:\n  y = %lf\n  SM = %lf\n  SE = %lf\n", y, SM, SE);
    }
    return 0;
}
