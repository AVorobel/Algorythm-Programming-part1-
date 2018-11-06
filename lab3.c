#include <stdio.h>
#include <math.h>
#define M_E 2.718281
#define pi 3.141592

long long factorial(int x)
{
    if(x == 0 || x == 1)
        {
            return 1;
        }
    else
        {
            return x*factorial(x-1);
        }
}

int main()
{
    double y, SN = 0, SE = 0, m = 0;
    float x;
    int n = 1;

    for(x=0.1 ; x<=1 ; x+=0.09)
    {
        y = pow(M_E,x*cos(pi/4))*cos(x*sin(pi/4));


        for(n=0 , SN=0 ; n<25 ; n++)
        {
            m = (cos(n*(pi/4))/factorial(n))*(pow(x,n));
            SN += m;
        }

        n=0;
        SE=0;

        do
        {
            m = (cos(n*(pi/4))/factorial(n))*(pow(x,n));
            SE += m;
            n++;
        }
        while(m>0.0001);

        printf("result:  y = %lf  SN = %lf  SE = %lf\n", y, SN, SE);
    }
    return 0;
}
